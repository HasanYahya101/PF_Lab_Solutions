#include <iostream>
using namespace std;

// Function to cyclically rotate an array by a given factor d
void rotateArray(int arr[], int size, int d)
{
    int temp[d];

    // Store the first d elements in a temporary array
    for (int i = 0; i < d; ++i)
    {
        temp[i] = arr[i];
    }

    // Shift the remaining elements to the left
    for (int i = d; i < size; ++i)
    {
        arr[i - d] = arr[i];
    }

    // Copy the temporary array back to the original array
    for (int i = size - d, j = 0; i < size; ++i, ++j)
    {
        arr[i] = temp[j];
    }
}

int main()
{
    const int arraySize = 7;
    int myArray[arraySize] = {1, 2, 3, 4, 5, 6, 7};
    int rotateFactor = 2;

    std::cout << "Original array: ";
    for (int i = 0; i < arraySize; ++i)
    {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    // Rotate the array
    rotateArray(myArray, arraySize, rotateFactor);

    std::cout << "Array after rotation: ";
    for (int i = 0; i < arraySize; ++i)
    {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    system("pause");
    return 0;
}
