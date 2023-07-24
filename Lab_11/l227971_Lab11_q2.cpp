#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    int choice;
    cout << "1. Encrypt data" << endl;
    cout << "2. Decrypt data" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    if (choice == 1)
    {
        ifstream fin;
        fin.open("input.txt");
        ofstream fout;
        fout.open("encrypt.txt");
        char ch;
        while (fin.get(ch))
        {
            ch = ch + 1;
            cout << ch;
            fout << ch;
        }
        fin.close();
        fout.close();
    }
    else if (choice == 2)
    {
        ifstream fin;
        fin.open("encrypt.txt");
        ofstream fout;
        fout.open("decrypt.txt");
        char ch;
        while (fin.get(ch))
        {
            ch = ch - 1;
            cout << ch;
            fout << ch;
        }
        fin.close();
        fout.close();
    }
    else
    {
        cout << "Invalid choice" << endl;
    }
    cout << endl;
    return 0;


}
