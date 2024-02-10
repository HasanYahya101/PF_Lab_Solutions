#include <iostream>
using namespace std;

// Function to perform bubble sort on the array
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap arr[j] and arr[j+1] if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    const int size = 10;
    int exampleArray[size] = {5, 2, 9, 1, 5, 6, 3, 8, 7, 4};

    std::cout << "Original Array: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << exampleArray[i] << " ";
    }
    std::cout << std::endl;

    // Perform bubble sort
    bubbleSort(exampleArray, size);

    std::cout << "Sorted Array: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << exampleArray[i] << " ";
    }
    std::cout << std::endl;

    system("pause");
    return 0;
}
