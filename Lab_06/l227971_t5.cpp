#include <iostream>
using namespace std;
int main()
{
    int n1, total = 0;
    int i;
    cout << "Enter a positive Integer: ";
    cin >> n1;
    while (n1 < 1)
    {
        cout << endl;
        cout << "Value, must be greater then 0, Error!!" << endl << endl;
        cout << "Enter a positive Integer: ";
        cin >> n1;
        cout << endl;
    }
    cout << endl << endl;
    for (i = 1; i <= n1; ++i) 
    {
        total += i * i;
    }

    cout << "Total Sum = " << total << endl << endl;
    return 0;
}