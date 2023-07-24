#include <iostream>
using namespace std;
int main()
{

    
   int num1, len;
   cout << "Enter Number: ";
   cin >> num1;
   while (num1 < 1)
   {
       cout << endl;
       cout << "Error, Value must be greater then 0!!" << endl << endl;
       cout << "Enter Number: ";
       cin >> num1;
       cout << endl;
   }
   cout << "Enter Length: ";
   cin >> len;
   while (len < 1)
   {
       cout << endl;
       cout << "Error, Value must be greater then 0!!" << endl << endl;
       cout << "Enter Length: ";
       cin >> len;
       cout << endl;
   }
   cout << endl;
   cout << "Table is as Under:" << endl << endl;
   for (int i = 1; i <= len; i++)
       cout << num1 << " * " << i << " = " << num1 * i << endl;
   return 0;
    
}