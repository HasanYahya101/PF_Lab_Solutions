#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    const int Size = 100;
    char str[Size];
    char ch;
    int count = 0;
    cout << "Enter a string: ";
    cin.getline(str, Size);
    cout << "Enter a character to find frequency: ";
    cin >> ch;
    for (int i = 0; i < strlen(str); ++i)
    {
        if (ch == str[i])
            ++count;
    }
    cout << "Frequency of " << ch << " = " << count << endl;
    if (count == 0)
    {
        cout << "Your character does not exist!!" << endl;
    }
    if (count > 0)
    {
        cout << "Your character does exist!!" << endl;
    }
    return 0;
}
