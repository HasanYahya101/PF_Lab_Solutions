#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int Size = 100;
    char str[Size];
    int i;
    cout << "Enter a string: ";
    cin.getline(str, Size);
    for (i = 0; str[i] != '\0'; ++i)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    cout << "Output String: " << str;
    cout << endl;
    return 0;
}
