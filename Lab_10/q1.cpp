#include <iostream>
using namespace std;

// A- Compare two char arrays
bool compareArrays(const char *arr1, const char *arr2)
{
    int i = 0;
    while (arr1[i] != '\0' && arr2[i] != '\0')
    {
        if (arr1[i] != arr2[i])
        {
            return false;
        }
        i++;
    }
    return arr1[i] == arr2[i];
}

// B- Copy contents of one array into another and then compare both
void copyAndCompareArrays(const char *source, char *destination)
{
    int i = 0;
    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}

int main()
{
    const char *arr1 = "Hello";
    const char *arr2 = "World";
    char arr3[10];

    // A- Compare two char arrays
    bool result1 = compareArrays(arr1, arr2);
    cout << "Comparison result (A): " << (result1 ? "Equal" : "Not equal") << endl;

    // B- Copy contents of one array into another and then compare both
    copyAndCompareArrays(arr1, arr3);
    bool result2 = compareArrays(arr1, arr3);
    cout << "Comparison result (B): " << (result2 ? "Equal" : "Not equal") << endl;

    return 0;
}
