#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[100], ch;
    int i, length;
    int count = 0;
    cout << "Enter a sentence: ";
    cin.getline(str, 100);

    length = strlen(str);

    cout << "Enter character to delete: ";
    cin >> ch;

    for (i = 0; i < length; i++)
    {
        if (str[i] == ch)
        {
            count++;

            for (int j = i; j < length; j++)
            {
                str[j] = str[j + 1];
            }

            length--;
        }
    }

    cout << "After deleting the character '" << ch << "' " << " times, the sentence is: " << str << endl << endl;

    return 0;
}
