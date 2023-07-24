#include <iostream>
using namespace std;
void printArray(int arr[], int a);
void leftRotatebySum(int arr[], int a);
void leftRotate(int arr[], int d, int a);
int main() {
    int d, b;
    cout << "Enter value of d (the amount by which you ant to move by to the left): ";
    cin >> d;
    if (d < 1)
    {
        cout << "Error!" << endl;
        cout << "Enter value of d (the amount by which you ant to move by to the left): ";
        cin >> d;
    }
    cout << "Enter 7 values in Array! " << endl;
    const int a = 7;
    int arr[a];
    cout << "Enter Value 1 to " << a << " in array: ";
    for (b = 0; b < a; b++) {
        cin >> arr[b];
    }
    leftRotate(arr, d, a);
    printArray(arr, a);
    return 0;
}
void printArray(int arr[], int a) {
    for (int i = 0; i < a; i++) {
        cout << arr[i] << " ";
    }
}
void leftRotate(int arr[], int d, int a) {
    for (int i = 0; i < d; i++) {
        leftRotatebySum(arr, a);
    }
}
void leftRotatebySum(int arr[], int a) {
    int temp = arr[0], i;
    for (i = 0; i < a - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[i] = temp;
}