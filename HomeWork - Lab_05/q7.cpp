#include <iostream>
#include <cstring>
using namespace std;

// Function to check if a string is a palindrome
bool PalindromeString(char arr[], int size)
{
    // Traverse the array to check for palindrome
    for (int i = 0; i < size / 2; ++i)
    {
        char a = arr[i];
        char b = arr[size - i - 1];
        // convert to lowercase
        if (a >= 'A' && a <= 'Z')
        {
            a += 32;
        }

        if (b >= 'A' && b <= 'Z')
        {
            b += 32;
        }

        if (a != b)
        {
            return false; // If characters don't match, it's not a palindrome
        }
    }
    return true; // If the loop completes, the string is a palindrome
}

int main()
{
    const int size1 = 8;
    char exampleArray1[size1] = {'1', '2', '3', '4', '4', '3', '2', '1'};

    std::cout << "Input array: ";
    for (int i = 0; i < size1; ++i)
    {
        std::cout << exampleArray1[i];
    }
    std::cout << std::endl;

    // Call the PalindromeString function
    bool isPalindrome1 = PalindromeString(exampleArray1, size1);

    if (isPalindrome1)
    {
        std::cout << "The input string is a palindrome." << std::endl;
    }
    else
    {
        std::cout << "The input string is not a palindrome." << std::endl;
    }

    const int size2 = 5;
    char exampleArray2[size2] = {'A', 'f', 'i', 'f', 'a'};

    std::cout << "Input array: ";
    for (int i = 0; i < size2; ++i)
    {
        std::cout << exampleArray2[i];
    }
    std::cout << std::endl;

    // Call the PalindromeString function
    bool isPalindrome2 = PalindromeString(exampleArray2, size2);

    if (isPalindrome2)
    {
        std::cout << "The input string is a palindrome." << std::endl;
    }
    else
    {
        std::cout << "The input string is not a palindrome." << std::endl;
    }

    system("pause");
    return 0;
}
