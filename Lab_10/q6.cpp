#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 100;
    char arr[SIZE];
    char searchChar;
    int count = 0;

    cout << "Enter a string: ";
    cin.getline(arr, SIZE);

    cout << "Enter a character to search: ";
    cin >> searchChar;

    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == searchChar)
        {
            count++;
        }
    }

    cout << "The character '" << searchChar << "' occurred " << count << " times." << endl;

    return 0;
}