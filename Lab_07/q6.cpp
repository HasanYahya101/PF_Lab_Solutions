#include <iostream>
using namespace std;

double getLength()
{
    double length;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    return length;
}

double getWidth()
{
    double width;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    return width;
}

double getArea(double length, double width)
{
    return length * width;
}

void displayData(double length, double width, double area)
{
    cout << "Rectangle's Length: " << length << endl;
    cout << "Rectangle's Width: " << width << endl;
    cout << "Rectangle's Area: " << area << endl;
}

int main()
{
    double length, width, area;
    length = getLength();
    width = getWidth();
    area = getArea(length, width);
    displayData(length, width, area);
    return 0;
}
