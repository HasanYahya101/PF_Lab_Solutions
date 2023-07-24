#include <iostream>
using namespace std;
int main()
{
    int num1;
    cout << "Enter Number: ";
    cin >> num1;
    cout << "Output: " << endl << endl << endl;
    int i = num1;
    int a = num1;
    int p1, p2, p3;
    p1 = num1 + 1;
    p2 = i;
    p3 = i + 1;
    do
    {
        
        do
        {
            cout << num1;
            i--;
        } while (i > 0);
        cout << endl;
        p2--;
        p3--;
        p1--;
        num1 = p1 - 1;
        i = p3 - 1;
    } while (p2 > 0 && p1 > 0 && p3 > 0 && num1 > 0);

   

    return 0;
}