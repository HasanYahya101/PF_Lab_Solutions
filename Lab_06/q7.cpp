#include <iostream>
using namespace std;
int main()
{
    int count;
    char spaces = ' ';
    for (int i = 1; i <= 21; ++i)
    {
        cout << " = ";
    }
    cout << endl;
    for (int count1 = 1; count1 <= 8; ++count1)
    {
        cout << "= ";
        for (count = 1; count <= 59; ++count)
        {
            cout << spaces;
        }
        cout << " =";
        cout << endl;
    }
    for (int i = 1; i <= 21; ++i)
    {
        cout << " = ";
    }
    cout << endl;
    system("pause");
}