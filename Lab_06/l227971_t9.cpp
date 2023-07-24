#include<iostream>
using namespace std;
int main()
{
    int i, n, r;
    int total;
    total = 0;
    cout << "Enter Number: ";
    cin >> n;
    cout << "***********************************************************************" << endl << endl;
    while (n < 1)
    {
        cout << "Error - number must be greter than 0" << endl;
        cout << endl;
        cout << "Enter the number: ";
        cin >> n;
        cout << "***********************************************************************" << endl << endl;
        cout << endl;
    }
    for (i = 1; i < n; i++)
    {
        r = n % i;
        if (r == 0)
            total = total + i;
    }
    if (total == n)
        cout << endl << n << " is a perfect number.";
    else
        cout << endl << n << " is not a perfect number.";
    cout << endl;
    return 0;
}