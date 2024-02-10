#include <iostream>
using namespace std;

int main()
{
    int tableNumber, tableLength;

    cout << "Enter table number: ";
    cin >> tableNumber;

    while (tableNumber < 1)
    {
        cout << "Invalid input. Please enter a positive number: ";
        cin >> tableNumber;
    }

    cout << "Enter table length: ";
    cin >> tableLength;

    while (tableLength < 1)
    {
        cout << "Invalid input. Please enter a positive number: ";
        cin >> tableLength;
    }

    for (int i = 1; i <= tableLength; i++)
    {
        cout << tableNumber << " x " << i << " = " << tableNumber * i << endl;
    }

    system("pause");
    return 0;
}