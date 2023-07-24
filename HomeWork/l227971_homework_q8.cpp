#include <iostream>
using namespace std;

void binomSum(const int arr[], int size) {

    for (int i = 0; i < size; i++) {
        int sum = 0;

        for (int j = 1; j <= arr[i]; j++) {
            sum += j;
        }

        cout << sum << " ";
    }
}

int main() {

    const int size = 6;
    cout << "Size of Array is 6! " << endl;
    
    int arr[size];
    int i1 = 0;
    while (i1 < size)
    {
        cout << "Enter Value in Array(" << i1 << "): ";
        cin >> arr[i1];
        i1++;
    }
    binomSum(arr, size);

    return 0;
}