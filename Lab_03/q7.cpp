#include <iostream>
using namespace std;

int main()
{
    cout << "Enter S to calculate area of Square and C to calculate area of Circle : ";
    char choice;
    cin >> choice;
    while (!(choice == 'S' || choice == 's' || choice == 'C' || choice == 'c'))
    {
        cout << "Enter a valid choice : ";
        cin >> choice;
    }

    if (choice == 'S' || choice == 's')
    {
        cout << "Enter side of square : ";
        double side;
        cin >> side;
        while (side < 0)
        {
            cout << "Enter a valid side : ";
            cin >> side;
        }
        cout << "Area of square is " << side * side << endl;
    }
    else if (choice == 'C' || choice == 'c')
    {
        cout << "Enter radius of circle : ";
        double radius;
        cin >> radius;
        while (radius < 0)
        {
            cout << "Enter a valid radius : ";
            cin >> radius;
        }
        cout << "Area of circle is " << 3.14 * radius * radius << endl;
    }

    system("pause");
    return 0;
}