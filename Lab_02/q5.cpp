#include <iostream>
using namespace std;

int main()
{
    // Read 6 numbers and display percentage of even numbers and odd numbers.
    int num1, num2, num3, num4, num5, num6;
    cout << "Enter 6 numbers : " << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6;

    int evenCount = 0;
    int oddCount = 0;

    if (num1 % 2 == 0)
        evenCount++;
    else
        oddCount++;

    if (num2 % 2 == 0)
        evenCount++;
    else
        oddCount++;

    if (num3 % 2 == 0)
        evenCount++;
    else
        oddCount++;

    if (num4 % 2 == 0)
        evenCount++;
    else
        oddCount++;

    if (num5 % 2 == 0)
        evenCount++;
    else
        oddCount++;

    if (num6 % 2 == 0)
        evenCount++;
    else
        oddCount++;

    cout << "Percentage of even numbers : " << (evenCount / 6.0) * 100 << endl;
    cout << "Percentage of odd numbers : " << (oddCount / 6.0) * 100 << endl;

    system("pause");
    return 0;
}