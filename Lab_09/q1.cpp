#include <iostream>
using namespace std;

// Function to find and print unique elements in a 1D array
void findAndPrintUniqueElements(int arr[], int size)
{
    // Traverse the array
    for (int i = 0; i < size; ++i)
    {
        bool isUnique = true;

        // Check if the current element is unique
        for (int j = 0; j < size; ++j)
        {
            if (i != j && arr[i] == arr[j])
            {
                isUnique = false;
                break;
            }
        }

        // If unique, print the element
        if (isUnique)
        {
            std::cout << arr[i] << " ";
        }
    }

    std::cout << std::endl;
}

int main()
{
    // Unique elements are those that appear only once in the array
    const int arraySize = 8;
    int myArray[arraySize] = {2, 4, 6, 2, 8, 4, 10, 12};

    std::cout << "Original array: ";
    for (int i = 0; i < arraySize; ++i)
    {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Unique elements: ";
    findAndPrintUniqueElements(myArray, arraySize);

    system("pause");
    return 0;
}
