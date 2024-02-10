#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
struct inventory
{
    char name[20];
    int quantity;
    float price;
};
int main()
{
    inventory item[10];
    ifstream fin;
    fin.open("inventory.txt");
    if (fin.fail())
    {
        cout << "File not found" << endl;
        exit(1);
    }
    for (int i = 0; i < 10; i++)
    {
        fin >> item[i].name >> item[i].quantity >> item[i].price;
    }
    fin.close();
    cout << "Name" << setw(10) << "Quantity" << setw(10) << "Price" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << item[i].name << setw(10) << item[i].quantity << setw(10) << item[i].price << endl;
    }
    int code, quantity;
    float total = 0;
    char choice;
    do
    {
        cout << "Enter the code of the item you want to buy: ";
        cin >> code;
        cout << "Enter the quantity of the item you want to buy: ";
        cin >> quantity;
        total += item[code].price * quantity;
        item[code].quantity -= quantity;
        cout << "Do you want to buy more items? (y/n): ";
        cin >> choice;
    } while (choice == 'y');
    cout << endl
         << "Updated Inventory!!!" << endl;
    cout << "Name" << setw(10) << "Quantity" << setw(10) << "Price" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << item[i].name << setw(10) << item[i].quantity << setw(10) << item[i].price << endl;
    }
    cout << "Total Bill is: " << total << endl;
    ofstream fout;
    fout.open("inventory.txt");
    for (int i = 0; i < 10; i++)
    {
        fout << item[i].name << setw(10) << item[i].quantity << setw(10) << item[i].price << endl;
    }
    fout.close();
    return 0;
}