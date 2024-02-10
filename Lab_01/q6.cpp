#include <iostream>
using namespace std;

// external variable declaration
extern int a, b;
extern int c;
extern float f;

int main()
{
    // same variable declaration
    int a, b;
    int c;
    float f;

    // variable initialization
    a = 10;
    b = 20;
    c = a + b;

    cout << c << endl;

    f = 70.0 / 3.0;
    cout << f << endl;

    system("pause");
    return 0;
}