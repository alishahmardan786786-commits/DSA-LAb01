#include <iostream>
using namespace std;


int main() {
    int n = 0;

    // Read and validate the initial size n (1–10)
    do
    {
        cout << "Enter the initial number of marks (1-10): ";
        cin >> n;
        if (n < 1 || n > 10) {
            cout << "Invalid size. Please enter a number between 1 and 10.\n";
        }
    } while (n < 1 || n > 10);

    // Allocate the initial block of n integers
    int* marks = new int[n];

    // Read initial marks
    cout << "Enter " << n << " marks:\n";
    for (int i = 0; i < n; i++) {
        cout << "Mark " << i + 1 << ": ";
        cin >> *(marks + i); // Using pointer notation
    }

    cout << "\nA new student joins. Resizing array...\n";

    // 1. Allocate a second block of n + 1 integers
    int* newBlock = new int[n + 1];

    // Copy the original n values into the new block using pointer notation
    for (int i = 0; i < n; i++) {
        *(newBlock + i) = *(marks + i);
    }

    // Read the new mark into the final position
    cout << "Enter the mark for the new student: ";
    cin >> *(newBlock + n); 

    // 2. Release the old block
    delete[] marks;

    // Make the original pointer refer to the new block
    marks = newBlock;

    // Update the stored size
    n = n + 1;

    // Display all values using the updated original pointer
    cout << "\n--- Updated Marks List (" << n << " elements) ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Mark " << i + 1 << ": " << *(marks + i) << "\n";
    }

    // 3. Release the final block exactly once
    delete[] marks;
    marks = nullptr;

    return 0;
}

