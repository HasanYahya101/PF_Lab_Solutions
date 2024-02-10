#include <iostream>
#include <cstring>
#include <string>
using namespace std;

void input(char array[], int s, string str2)
{
    for (int i = 0; i < s; ++i)
    {
        array[i] = str2[i];
    }
}

string reverse_string(char array[], int s)
{
    string new_str;
    for (int i = s - 1; i >= 0; --i)
    {
        new_str += array[i];
    }
    return new_str;
}

void ReverseString(char str[])
{
    int length = strlen(str);

    // Reverse the entire string
    for (int i = 0; i < length / 2; ++i)
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    // Reverse each word in the string
    int start = 0;
    for (int i = 0; i <= length; ++i)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            // Reverse the word
            for (int j = start; j < (start + i) / 2; ++j)
            {
                char temp = str[j];
                str[j] = str[start + i - j - 1];
                str[start + i - j - 1] = temp;
            }

            // Move to the next word
            start = i + 1;
        }
    }
}

int main()
{
    char array[60];
    string str;
    cout << "Enter a string: " << endl;
    getline(cin, str);
    int size;
    cout << "Enter the number of characters in the array: " << endl;
    cin >> size;
    input(array, size, str);
    string new_str = reverse_string(array, size);
    // convert to c-string
    char cstr[new_str.size() + 1];
    strcpy(cstr, new_str.c_str());
    ReverseString(cstr);
    cout << endl;
    cout << "Reversed string: " << cstr << endl;

    system("pause");
    return 0;
}