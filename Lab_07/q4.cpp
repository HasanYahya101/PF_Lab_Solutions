#include <iostream>
using namespace std;

int main()
{
    void numbers(int x, int &y);
    int a, b, c;
    a = 22;
    b = 90;
    c = 14;
    numbers(a, a);
    numbers(a, b);
    numbers(b, a);
    cout << a << " " << b << " " << c << endl;
}

void numbers(int x, int &y)
{
    int b;
    x += 6;
    y += 11;
    b = 55;
    cout << b << " " << x << " " << y << endl;
}