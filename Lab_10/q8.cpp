#include <iostream>
using namespace std;

int countCharacters(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char input[100];
    cout << "Enter a string: ";
    cin.getline(input, 100);
    int numChars = countCharacters(input);
    cout << "Number of characters: " << numChars << endl;
    return 0;
}