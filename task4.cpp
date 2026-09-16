#include <iostream>
using namespace std;

int main() {
    int arr[8];

    // Input 8 integers from the user
    cout << "Enter 8 integers: " << endl;
    for (int i = 0; i < 8; i++) {
        cin >> arr[i];
    }

    // Initialize largest and smallest with the first element
    int largest = arr[0];
    int smallest = arr[0];
    int largestIndex = 0;
    int smallestIndex = 0;

    // Traverse the array to find max and min values and their first indices
    for (int i = 1; i < 8; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
            largestIndex = i;
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
            smallestIndex = i;
        }
    }

    // Display results
    cout << "Largest value: " << largest << " at index " << largestIndex << endl;
    cout << "Smallest value: " << smallest << " at index " << smallestIndex << endl;

    return 0;
}
