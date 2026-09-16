#include <iostream>
using namespace std;
int totalMarks(int marks[],int n){
    int total;

    for (int i = 0; i < n; i++)
    {   
        total += *(marks + i);
    }
    return total;
}
int main()
{   int n; 
    int total = 0;
    int count = 0;
    double average;

    cout << "Enter number of students : "  ;
    cin >> n;

    int* marks = new int[n];

    for (int i = 0; i < n; i++)
    {   cout << "\nEnter marks of students " << i+1 << " : ";
        cin >> *(marks + i);
    }

    for (int i = 0; i < n; i++)
    {   
        cout << "\nMarks of student " << i+1 << " is : " << *(marks + i);
    }
    for (int i = 0; i < n; i++)
    { 
        if(*(marks + i) >= 50){
             count++;
        }
    }
    
    total = totalMarks(marks,n);
    cout << "\nTotal marks of all students is : " << total << endl;
   
    average = total /(double)n;
    cout << "Average of the students marks is : " << average  << endl;
    
    cout << "pass count : " << count  << endl;
    delete[] marks; 
    marks = nullptr;

    
}
