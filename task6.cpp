#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int uniqueCount = 0; // Tracks the placement position and count of unique elements

    // Input 10 integers from the user
    cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    // Process the array to sift unique values to the front
    for (int i = 0; i < 10; i++) {
        bool isDuplicate = false;

        // Check if the current element already exists in the unique section
        for (int j = 0; j < uniqueCount; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }

        // If it's a first occurrence, move it into the next available unique slot
        if (!isDuplicate) {
            arr[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }

    // Display the unique values shifted to the beginning of the array
    cout << "Unique values: ";
    for (int i = 0; i < uniqueCount; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Display the final count of distinct values
    cout << "Count of unique values: " << uniqueCount << endl;

    return 0;
}
