#include <iostream>
using namespace std;

int main() {
    int sales[2][3];
    int (*rowPtr)[3] = sales;

    // 1. Input: Read six non-negative values using pointer notation
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            do {
                cout << "Enter element [" << i << "][" << j << "]: ";
                cin >> *(*(rowPtr + i) + j); 
            } while (*(*(rowPtr + i) + j) < 0);
        }
    }

    // 1. Output: Display 2D array elements in a two-row table format
    cout << "\n--- Sales Table ---\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << *(*(rowPtr + i) + j) << "\t";
        }
        cout << endl;
    }

    // 2. Calculate and display row (Branch) totals
    cout << "\n--- Branch Totals ---\n";
    for (int i = 0; i < 2; i++) {
        int branchTotal = 0;
        for (int j = 0; j < 3; j++) {
            branchTotal += *(*(rowPtr + i) + j);
        }
        cout << "Total for Branch " << i + 1 << ": " << branchTotal << "\n";
    }

    // 2. Calculate and display column (Day) totals
    cout << "\n--- Day Totals ---\n";
    for (int j = 0; j < 3; j++) {
        int dayTotal = 0;
        for (int i = 0; i < 2; i++) {
            dayTotal += *(*(rowPtr + i) + j);
        }
        cout << "Total for Day " << j + 1 << ": " << dayTotal << "\n";
    }

    return 0;
}

