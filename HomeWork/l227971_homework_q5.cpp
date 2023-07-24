#include <iostream>
using namespace std;
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int arr[], int n1)
{
    int i, j;
    for (i = 0; i < n1 - 1; i++)
        for (j = 0; j < n1 - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    const int i = 6;
    cout << "Size of Array is 6! " << endl;
    
    int arr[i];
    int i1 = 0;
    while (i1 < i)
    {
        cout << "Enter Value in Array(" << i1 << "): ";
        cin >> arr[i1];
        i1++;
    }
    int n1 = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n1);
    cout << "Sorted array: \n";
    printArray(arr, n1);
    return 0;
}