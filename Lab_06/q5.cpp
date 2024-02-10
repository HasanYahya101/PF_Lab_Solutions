#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a positive value: ";
    cin >> n;

    while (n < 1)
    {
        cout << "Invalid input. Please enter a positive number: ";
        cin >> n;
    }

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i * i;
    }

    cout << "Sum of squares from 1 to " << n << ": " << sum << endl;

    system("pause");
    return 0;
}