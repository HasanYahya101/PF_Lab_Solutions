#include <iostream>
using namespace std;
int main()
{
    int int1;
    long f1 = 1.0;
    cout << "Enter a positive integer: ";
    cin >> int1;

    if (int1 < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else 
    {
        for (int i = 1; i <= int1; ++i) 
        {
            f1 *= i;
        }
        cout << "Factorial of " << int1 << " = " << f1;
    }
    int q1;
    cout << endl;
    cout << "Do you want to find factorial Again (1 for yes, 2 for no): ";
    cin >> q1;
    if (q1 == 2)
    {
        cout << endl;
        cout << "Program has ended";
        exit(0);
    }
    while (q1 > 2 || q1 < 1)
    {
        cout << endl;
        cout << "Enter Valid Value";
        cout << endl;
        cout << "Do you want to find factorial Again (1 for yes, 2 for no): ";
        cin >> q1;
    }
    while (q1 == 1)
    {
        cout << "Enter a positive integer: ";
        cin >> int1;

        if (int1 < 0)
            cout << "Error! Factorial of a negative number doesn't exist.";
        else
        {
            for (int i = 1; i <= int1; ++i)
            {
                f1 *= i;
            }
            cout << "Factorial of " << int1 << " = " << f1;
        }
        int q1;
        cout << endl;
        cout << "Do you want to find factorial Again (1 for yes, 2 for no): ";
        cin >> q1;
        if (q1 == 2)
        {
            cout << endl;
            cout << "Program has ended";
            exit(0);
        }
        while (q1 > 2 || q1 < 1)
        {
            cout << endl;
            cout << "Enter Valid Value";
            cout << endl;
            cout << "Do you want to find factorial Again (1 for yes, 2 for no): ";
            cin >> q1;
        }
    }
    


    return 0;
}