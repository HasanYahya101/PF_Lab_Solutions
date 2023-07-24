#include <iostream>
using namespace std;
int Search(int arr[], int size, int num);
int main()
{
    const int i = 6;
    cout << "Size of Array is 6!" << endl;
    
    int arr[i];
    int i1 = 0;
    while (i1 < i)
    {
        cout << "Enter Value in Array(" << i1 << "): ";
        cin >> arr[i1];
        i1++;
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    int num;
    cout << "Enter the number to be found in array: ";
    cin >> num;
    int index = Search(arr, size, num);
    if (index != -1)
        cout << "The value " << num << " is present at index " << index << endl;
    else
        cout << "The value " << num << " is not present in array" << endl;
    return 0;
}
int Search(int arr[], int size, int num)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}