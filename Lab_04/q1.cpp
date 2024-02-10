#include <iostream>
using namespace std;

int main()
{
    // Read N numbers from the user and display their sum and average (Note that the value of N will be entered by the user)
    int n;
    cout << "Enter the value of N : ";
    cin >> n;
    while (n < 1)
    {
        cout << "Enter a valid value of N : ";
        cin >> n;
    }

    int sum = 0;
    int i = 0;

    while (i < n)
    {
        int num;
        cout << "Enter number " << i + 1 << " : ";
        cin >> num;
        sum += num;
        i++;
    }

    cout << "Sum of " << n << " numbers is " << sum << endl;
    cout << "Average of " << n << " numbers is " << static_cast<float>(sum) / n << endl;

    system("pause");
    return 0;
}