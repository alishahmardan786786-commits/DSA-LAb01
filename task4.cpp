#include <iostream>
using namespace std;

int main() {
    int rows = 0, cols = 0;

    // 2. Read and validate rows and cols before allocation
    do {
        cout << "Enter number of students (rows > 0): ";
        cin >> rows;
        if (rows <= 0) cout << "Invalid number of students. Try again.\n";
    } while (rows <= 0);

    do {
        cout << "Enter number of subjects (cols > 0): ";
        cin >> cols;
        if (cols <= 0) cout << "Invalid number of subjects. Try again.\n";
    } while (cols <= 0);

    // Allocate an int** marks array of row pointers
    int** marks = new int*[rows];
    
    // Allocate cols integers for each row
    for (int r = 0; r < rows; r++) {
        marks[r] = new int[cols];
    }

    // 3. Read marks from 0 to 100
    cout << "\nEnter marks (0 to 100):\n";
    for (int r = 0; r < rows; r++) {
        cout << "Student " << r + 1 << ":\n";
        for (int c = 0; c < cols; c++) {
            cout << "  Subject " << c + 1 << ": ";
            // Using pointer notation to read
            cin >> *(*(marks + r) + c); 
        }
    }

    // Display the matrix using pointer notation
    cout << "\n--- Marks Matrix ---\n";
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            cout << *(*(marks + r) + c) << "\t";
        }
        cout << "\n";
    }

    // 4. Calculate each student's total and find the highest
    int maxTotal = -1;
    int highestStudentNum = 1;

    for (int r = 0; r < rows; r++) {
        int studentTotal = 0;
        for (int c = 0; c < cols; c++) {
            studentTotal += *(*(marks + r) + c);
        }

        // Strictly greater than (>) preserves the first student in case of a tie
        if (studentTotal > maxTotal) {
            maxTotal = studentTotal;
            highestStudentNum = r + 1; // 1-based index
        }
    }

    cout << "\n--- Results ---\n";
    cout << "Student with the highest total: Student " << highestStudentNum << "\n";
    cout << "Total Marks: " << maxTotal << "\n";

    // 5. Deallocate memory
    // Delete all rows
    for (int r = 0; r < rows; r++) {
        delete[] marks[r];
    }
    // Delete the row-pointer array
    delete[] marks;
    // Prevent dangling pointer
    marks = nullptr; 

    return 0;
}

