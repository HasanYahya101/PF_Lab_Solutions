#include <iostream>
using namespace std;

int binarySearch(int array[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (array[mid] == key)
        {
            return mid;
        }
        else if (array[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return -1; //key not found
}

int main()
{
    const int i = 6;
    cout << "Size of Array is 6! " << endl;

    int array[i];
    int i1 = 0;
    while (i1 < i)
    {
        cout << "Enter Value in Array(" << i1 << "): ";
        cin >> array[i1];
        i1++;
    }

    int size = sizeof(array) / sizeof(array[0]);
    int key;
    cout << "Enter value you want to search for: ";
    cin >> key;

    cout << "Index of " << key << " is: " << binarySearch(array, size, key);
    int q = binarySearch(array, size, key);
    if (q == -1)
    {
        cout << " (Error-Key not found)";
    }

    return 0;
}