#include <iostream>
using namespace std;
void printUnique(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                break;
        if (i == j)
            cout << arr[i] << " " << endl;
    }
}
int main()
{
    const int num = 4;
    cout << "Add 4 values in Array! " << endl;
    int arr[num];
    int sort;
    sort = num - 1;
    int i = 0;
    while (i <= sort)
    {
        cout << "Enter value for Array " << i << ": ";
        cin >> arr[i];
        i++;
    }
    cout << endl;
    cout << "Unique values are given below:" << endl;
    int n = sizeof(arr) / sizeof(arr[0]);
    printUnique(arr, n);
    return 0;
}