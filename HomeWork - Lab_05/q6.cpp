#include <iostream>
using namespace std;

// Function to search for a number in an array
int Search(int arr[], int size, int num)
{
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == num)
        {
            return i; // Number found at index i
        }
    }
    return -1; // Number not found in the array
}

int main()
{
    const int size = 6;
    int exampleArray[size] = {4, 5, 6, 7, 8, 10};

    std::cout << "Input array: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << exampleArray[i] << " ";
    }
    std::cout << std::endl;

    int num;
    std::cout << "Number to be found: ";
    std::cin >> num;

    // Call the Search function
    int index = Search(exampleArray, size, num);

    if (index != -1)
    {
        std::cout << "The value " << num << " is present at index " << index << std::endl;
    }
    else
    {
        std::cout << "The value " << num << " is not present in the array." << std::endl;
    }

    system("pause");
    return 0;
}
