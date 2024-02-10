#include <iostream>
using namespace std;

int main()
{
    int base, exponent;
    cout << "Enter the base number: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;
    while (exponent < 0)
    {
        cout << "Exponent should be a positive integer. Please enter again: ";
        cin >> exponent;
    }

    int result = 1;
    int i = 0;
    do
    {
        result *= base;
        i++;
    } while (i < exponent);

    cout << "Result: " << result << endl;

    system("pause");
    return 0;
}