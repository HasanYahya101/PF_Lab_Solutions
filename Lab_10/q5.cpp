#include <iostream>
using namespace std;

int main()
{
    char input[100];
    cout << "Enter a string: ";
    cin.getline(input, 100);

    int smallLetters = 0;
    int capitalLetters = 0;
    int digits = 0;
    int specialCharacters = 0;

    for (int i = 0; input[i] != '\0'; i++)
    {
        if (islower(input[i]))
        {
            smallLetters++;
        }
        else if (isupper(input[i]))
        {
            capitalLetters++;
        }
        else if (isdigit(input[i]))
        {
            digits++;
        }
        else
        {
            specialCharacters++;
        }
    }

    cout << "Small letters: " << smallLetters << endl;
    cout << "Capital letters: " << capitalLetters << endl;
    cout << "Digits: " << digits << endl;
    cout << "Special characters: " << specialCharacters << endl;

    return 0;
}