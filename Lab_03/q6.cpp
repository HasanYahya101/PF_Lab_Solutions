#include <iostream>
using namespace std;

int main()
{
    cout << "Enter positive number: ";
    int num;
    cin >> num;
    while (num < 0)
    {
        cout << "Enter positive number: ";
        cin >> num;
    }
    if (num >= 0 && num <= 10)
    {
        cout << "Range is 0-10" << endl;
    }
    else if (num >= 11 && num <= 20)
    {
        cout << "Range is 11-20" << endl;
    }
    else if (num >= 21 && num <= 30)
    {
        cout << "Range is 21-30" << endl;
    }
    else if (num >= 31 && num <= 40)
    {
        cout << "Range is 31-40" << endl;
    }
    else if (num >= 41 && num <= 50)
    {
        cout << "Range is 41-50" << endl;
    }
    else if (num > 50)
    {
        cout << "Range is greater then 50" << endl;
    }

    system("pause");
    return 0;
}