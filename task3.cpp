#include <iostream>
using namespace std;

// Class Definition
class Student {
public:
    int rollNumber;
    int marks;

    void display() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    // Creating objects
    Student s1;
    Student s2;

    // Assigning values using the dot operator
    s1.rollNumber = 1;
    s1.marks = 75;

    s2.rollNumber = 2;
    s2.marks = 90;

    // Displaying initial values
    cout << "--- Initial Objects ---" << endl;
    s1.display();
    s2.display();

    // Changing only s1.marks to 80
    s1.marks = 80;

    // Displaying values after modification
    cout << "\n--- After Modifying s1.marks ---" << endl;
    s1.display();
    s2.display();

    return 0;
}
