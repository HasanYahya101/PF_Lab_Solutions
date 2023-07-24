#include <iostream>
using namespace std;
int main()
{
    int a = 11;
    int i = 1;
    int a1 = 5;
    int a2 = 5;

   
    while (i <= 5)
    {
        cout << "- ";
        i++;
    }
    cout << "* ";
    i = 1;
    while (i <= 5)
    {
        cout << "- ";
        i++;
    }
    i = 1;
    cout << endl;

    while (i <= 4)
    {
        cout << "- ";
        i++;
    }
    cout << "* - * ";
    i = 1;
    while (i <= 4)
    {
        cout << "- ";
        i++;
    }
    i = 1;
    cout << endl;

    while (i <= 3)
    {
        cout << "- ";
        i++;
    }
    cout << "* - - - * ";
    i = 1;
    while (i <= 3)
    {
        cout << "- ";
        i++;
    }
    i = 1;
    cout << endl;

    while (i <= 2)
    {
        cout << "- ";
        i++;
    }
    cout << "* - - - - - * ";
    i = 1;
    while (i <= 2)
    {
        cout << "- ";
        i++;
    }
    i = 1;
    cout << endl;

    while (i <= 1)
    {
        cout << "- ";
        i++;
    }
    cout << "* - - - - - - - * ";
    i = 1;
    while (i <= 1)
    {
        cout << "- ";
        i++;
    }
    i = 1;
    cout << endl;
    cout << "* ";
    while (i <= 9)
    {
        cout << "- ";
        i++;
    }
    cout << "*" << endl << endl << endl;
    return 0;
}