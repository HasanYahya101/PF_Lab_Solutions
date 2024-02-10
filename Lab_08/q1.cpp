#include <iostream>
using namespace std;

void getData(int arr[], int size)
{
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

int countEven(int arr[], int size)
{
    int count = 0;
    cout << "Even values in the array: ";
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << " ";
            count++;
        }
    }
    cout << endl;
    return count;
}

void findMinMax(int arr[], int size, int &min, int &max)
{
    min = arr[0];
    max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
}

int searchData(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    const int size = 6;
    int arr[size];

    getData(arr, size);

    int evenCount = countEven(arr, size);
    cout << "Count of even values: " << evenCount << endl;

    int min, max;
    findMinMax(arr, size, min, max);
    cout << "Min value: " << min << endl;
    cout << "Max value: " << max << endl;

    int key;
    cout << "Enter a value to search: ";
    cin >> key;
    int index = searchData(arr, size, key);
    if (index != -1)
    {
        cout << "Value found at index: " << index << endl;
    }
    else
    {
        cout << "Value not found in the array." << endl;
    }

    return 0;
}
