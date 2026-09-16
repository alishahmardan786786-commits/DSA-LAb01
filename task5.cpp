#include <iostream>
using namespace std;

int main() {
    int arr[6];

    // Read 6 integers from the user
    cout << "Enter 6 integers: ";
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    // Reverse the array in-place
    for (int i = 0; i < 6 / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[5 - i];
        arr[5 - i] = temp;
    }

    // Display the updated array
    cout << "Reversed array: ";
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
