#include <iostream>
using namespace std;

int ffunction(int, int);

int main()
{
    int temp = 0;
    int var1 = 3;
    int var2 = 5;
    temp = ffunction(var1, var2);
    cout << "Final value of temp is: " << temp << endl;
}

int ffunction(int x, int y)
{
    return x + y;
}