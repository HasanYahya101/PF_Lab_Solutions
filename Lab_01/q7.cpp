#include <iostream>
using namespace std;

int main()
{
    int length = 5;
    int breadth = 7;

    // calculate area and parameter
    int area = length * breadth;
    int parameter = 2 * (length + breadth);

    cout << "Area: " << area << endl;
    cout << "Parameter: " << parameter << endl;

    system("pause");
    return 0;
}