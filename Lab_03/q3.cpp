#include <iostream>
using namespace std;

int main()
{
    int quantity;
    double price;

    cout << "Enter the quantity of the item : ";
    cin >> quantity;
    while (quantity < 1)
    {
        cout << "Enter a valid quantity : ";
        cin >> quantity;
    }

    price = quantity * 50;

    cout << "Total price is : " << price << endl;

    system("pause");
    return 0;
}