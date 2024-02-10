#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    char choice = 'Y';
    int n, count1 = 2;
    double divide, sum = 0;
    do
    {
        cout << "Enter an even number: " << endl;
        cin >> n;
        if (n % 2 == 0)
        {
            for (int count = 1; count1 <= n; ++count)
            {
                divide = 1 / (double)count1;
                count1 = count1 + 2;
                sum = sum + divide;
            }
            cout << "The sum of the series is = " << sum << endl;
        }
        else
        {
            cout << "Invalid Input enter again:" << endl;
        }
        cout << "===========================================" << endl;
        cout << "Enter Y if you want to repeat" << endl;
        cin >> choice;
    } while (choice == 'Y');
    cout << "BYE-BYE" << endl;

    system("pause");
}