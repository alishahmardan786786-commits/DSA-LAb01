#include <iostream>
using namespace std;

int totalArray(int p[])
{   int total = 0;
    for (int i = 0; i < 5; i++)
    { 
      total += *(p+i);
    }
    return total;
}

int main(){

    int sales[5];
    int* p = sales;
    
    int total = 0;
   
    for (int i = 0; i < 5; i++)
    {
      do
      {
        cout << "Enter elment " << i << " :" << endl;
        cin >> *(p + i) ;
      } while (*(p + i) < 0);
    }
    cout << "The number of item across five days are : ";
    for (int i = 0; i < 5; i++)
    {
      cout << *(p+i) << " ";

    }
    total = totalArray(p);
    cout << "\nTotal number of values across five days are :" << total << endl;
     
    p[2] += 2;

    cout << "Updated values are : " ;
    for (int i = 0; i < 5; i++)
    {
      cout << *(p+i) << " ";
    }
  
    total = totalArray(p);
    cout << "\nUpdated total is : " << total;
}
