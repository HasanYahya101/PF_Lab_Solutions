#include <iostream>
using namespace std;

// Function to perform binary search and return the index of the key
int binarySearch(const int arr[], int size, int key)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
        {
            return mid; // Key found, return the index
        }
        else if (arr[mid] < key)
        {
            left = mid + 1; // If key is greater, search in the right half
        }
        else
        {
            right = mid - 1; // If key is smaller, search in the left half
        }
    }

    return -1; // Key not found, return -1
}

int main()
{
    const int size = 10;
    int exampleArray[size] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};

    int key;
    std::cout << "Enter the key to search: ";
    std::cin >> key;

    int index = binarySearch(exampleArray, size, key);

    if (index != -1)
    {
        std::cout << "Key found at index: " << index << std::endl;
    }
    else
    {
        std::cout << "Key not found in the array." << std::endl;
    }

    system("pause");
    return 0;
}
