#include <iostream>
using namespace std;

int main()
{
    int arr[10];

    // take 10 inputs
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Distinct elements: ";

    for (int i = 0; i < 10; i++)
    {
        bool is_duplicate = false;

        for (int j = 0; j < i; j++)   // only check BEFORE index i
        {
            if (arr[i] == arr[j])
            {
                is_duplicate = true;
                break;
            }
        }

        if (!is_duplicate)
        {
            cout << arr[i] << " ";
        }
    }

    cout << endl;
    return 0;
}
