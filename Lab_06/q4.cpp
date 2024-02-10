#include <iostream>
using namespace std;

int main()
{
    int num = 4;
    do
    {
        for (int i = 0; i < num; i++)
        {
            cout << num << " ";
        }
        cout << endl;
        num--;
    } while (num >= 1);

    system("pause");
    return 0;
}