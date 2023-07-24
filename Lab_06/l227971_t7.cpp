#include <iostream>
using namespace std;
int main()
{
    int s1, s2, a, b;
    s1 = 9;
    s2 = 30;
    cout << endl << endl;
    for (a = 1; a <= s1; a++) 
    {
        for (b = 1; b <= s2; b++) 
        {
            if (a == 1 || a == s1 || b == 1 || b == s2) 
            {
                cout << "=";
            }
            else 
            {
                cout << " ";
            }

        }
        cout << endl;
    }
 
    return 0;
}
