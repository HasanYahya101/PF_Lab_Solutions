#include <iostream>
using namespace std;

void ReverseString(char* str1)
{
    char* temp1 = str1; // Save the address of the start of the string

    char* end0 = str1; // Will be used to find the end of the string

    // Find the end of the string
    while (*end0)
    {
        end0++;
    }

    // Set the end pointer to point to the last character of the string
    end0--;

    // Swap the characters from start to end until the pointers meet in the middle
    while (temp1 < end0)
    {
        char tempChar = *temp1;
        *temp1 = *end0;
        *end0 = tempChar;

        temp1++;
        end0--;
    }

    cout << str1;
}

int main()
{
    cout << "Enter the text: ";
    char str1[100];
    cin.getline(str1, 100);
    cout << "Reversed text: ";
    ReverseString(str1);
}