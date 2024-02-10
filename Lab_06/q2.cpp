#include <iostream>
using namespace std;

int main()
{
    int start, end;
    cout << "Enter the starting point: ";
    cin >> start;
    cout << "Enter the ending point: ";
    cin >> end;

    cout << "Odd numbers in the given range: ";
    int num = start;
    do
    {
        if (num % 2 != 0)
        {
            cout << num << " ";
        }
        num++;
    } while (num <= end);

    cout << endl;

    system("pause");
    return 0;
}