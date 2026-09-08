#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Enter " << i << " element" << endl;
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum of the array's elements : " << sum << endl;

    return 0;
}