#include <iostream>
using namespace std;

// Function to update the array based on the sum of numbers
void binomSum(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        int currentNumber = arr[i];
        int sum = 0;

        // Calculate the sum of numbers from 1 to currentNumber
        for (int j = 1; j <= currentNumber; ++j)
        {
            sum += j;
        }

        // Update the array element with the calculated sum
        arr[i] = sum;
    }
}

int main()
{
    const int size = 5;
    int exampleArray[size] = {6, 4, 1, 3, 0};

    std::cout << "Input array: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << exampleArray[i] << " ";
    }
    std::cout << std::endl;

    // Call the binomSum function
    binomSum(exampleArray, size);

    std::cout << "Output array: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << exampleArray[i] << " ";
    }
    std::cout << std::endl;

    system("pause");
    return 0;
}
