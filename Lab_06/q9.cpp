#include <iostream>
using namespace std;
int main()
{
    long num, sum;
    sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 1; i < num; ++i)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == num)
    {
        cout << "It is a perfect number " << endl;
    }
    else
    {
        cout << "Not a perfect number\n";
    }
    system("pause");
}