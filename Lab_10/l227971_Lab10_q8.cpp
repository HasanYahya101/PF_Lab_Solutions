#include <iostream>
#include <string>

using namespace std;

const int Size = 100;

int count(char*);

int main()
{
    char str[Size];
    cout << "Enter String: " << endl;
    cin.getline(str, Size);
    int total = count(str);
    cout << "Total Characters: " << total << endl;
    return 0;
}

int count(char* str)
{
    int i;
    for (i = 0; *(str + i) != '\0'; i++);
    return i;
}