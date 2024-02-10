#include <iostream>
using namespace std;

int test(int n1, int n2)
{
    cout << n2 << n1 << endl;
    return n2 * n1;
}

int main()
{
    int n1 = 2, n2 = 3, n3 = 4;
    n2 = test(test(n1, n3), n2);
    cout << n1 << n3 << n2 << endl;
}