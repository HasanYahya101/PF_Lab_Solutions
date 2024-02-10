#include <iostream>
using namespace std;
int main()
{
    int k = 5;
    int m = 5;
    for (int j = 1; j <= 6; ++j)
    {
        for (int i = 0; i < 11; ++i)
        {
            if (i == k)
            {
                cout << "*"
                     << " ";
            }
            else if (i == m && j > 1)
            {
                cout << "*"
                     << " ";
            }
            else
                cout << "-"
                     << " ";
        }
        cout << "\n";
        --k;
        ++m;
    }
}