#include <iostream>
using namespace std;
int main()
{
    int product = 1;
    int count = 1;
    for (int i = 1; i <= 10; ++i)
    {
        for (int j = 1; j <= 10; ++j)
        {
            product = j * i;
            cout << product << "\t";
        }
        cout << endl;
    }
}