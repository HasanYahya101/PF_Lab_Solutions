#include <iostream>
using namespace std;

int main()
{
    char input[100];
    cout << "Enter a string: ";
    cin.getline(input, 100);

    for (int i = 0; input[i] != '\0'; i++)
    {
        if (islower(input[i]))
        {
            input[i] = toupper(input[i]);
        }
        else if (isupper(input[i]))
        {
            input[i] = tolower(input[i]);
        }
    }

    cout << "Converted string: " << input << endl;

    return 0;
}