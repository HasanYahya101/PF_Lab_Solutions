#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "In this Program, space will also be considered a special character!!" << endl;
    const int Size = 100;
    char input[Size];
    int small_letter = 0, capital_letter = 0, special_char = 0, digit = 0;
    cout << "Enter the input: ";
    cin.getline(input, Size);
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] >= 'a' && input[i] <= 'z')
        {
            small_letter++;
        }
        else if (input[i] >= 'A' && input[i] <= 'Z')
        {
            capital_letter++;
        }
        else if (input[i] >= '0' && input[i] <= '9')
        {
            digit++;
        }
        else
        {
            special_char++;
        }
    }
    cout << "Small letters: " << small_letter << endl;
    cout << "Capital letters: " << capital_letter << endl;
    cout << "Digits: " << digit << endl;
    cout << "Special characters: " << special_char << endl;
    return 0;
}
