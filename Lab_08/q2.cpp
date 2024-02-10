#include <iostream>
using namespace std;

const int size = 10;

void getData(int arr[])
{
    cout << "Enter " << ::size << " integers: ";
    for (int i = 0; i < ::size; i++)
    {
        cin >> arr[i];
    }
}

void sortData(int arr[])
{
    // using bubble sort
    for (int i = 0; i < ::size - 1; i++)
    {
        for (int j = 0; j < ::size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // printing the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < ::size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int searchData(int arr[], int searchNum)
{
    int left = 0;
    int right = ::size - 1;
    while (left <= right)
    {
        int middle = (left + right) / 2;
        if (arr[middle] == searchNum)
        {
            return middle;
        }
        else if (arr[middle] < searchNum)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }
    return -1; // Search number not found
}

int main()
{
    int arr[::size];
    getData(arr);
    sortData(arr);

    int searchNum;
    cout << "Enter a number to search: ";
    cin >> searchNum;

    int index = searchData(arr, searchNum);
    if (index != -1)
    {
        cout << "Number found at index: " << index << endl;
    }
    else
    {
        cout << "Number not found in the array." << endl;
    }

    return 0;
}
