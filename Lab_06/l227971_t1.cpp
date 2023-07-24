#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter Number 1 (on which power will be applied): ";
    cin >> num1;
    cout << "Enter Number 2 (which will be used as power): ";
    cin >> num2;
    while (num2 < 1)
    {
        cout << endl;
        cout << "Error, Value of power must be greater then 0!!" << endl;
        cout << endl;
        cout << "Enter Number 2 (which will be used as power): ";
        cin >> num2;
        cout << endl;
    }
    cout << endl;
    int r = 1;
    int i = 1;
    do
    {
        r = r * num1;
        i++;
    } while (i <= num2);
    cout << "Value of " << num1 << " raised to " << num2 << " power is: " << r;
    cout << endl << endl;
    return 0;
}