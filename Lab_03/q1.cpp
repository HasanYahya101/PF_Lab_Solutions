#include <iostream>
using namespace std;

int main()
{
    // enter 5 int and print the largest and smallest one
    int num1, num2, num3, num4, num5;
    cout << "Enter 5 numbers : " << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    int largest = num1;
    int smallest = num1;

    if (num2 > largest)
        largest = num2;
    if (num3 > largest)
        largest = num3;
    if (num4 > largest)
        largest = num4;
    if (num5 > largest)
        largest = num5;

    if (num2 < smallest)
        smallest = num2;
    if (num3 < smallest)
        smallest = num3;
    if (num4 < smallest)
        smallest = num4;
    if (num5 < smallest)
        smallest = num5;

    cout << "Largest number is : " << largest << endl;
    cout << "Smallest number is : " << smallest << endl;

    system("pause");
    return 0;
}