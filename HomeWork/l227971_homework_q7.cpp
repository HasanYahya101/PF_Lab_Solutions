#include <iostream>
#include <cstring>
using namespace std;
bool PalindromeString(char arr[], int size) {
    int i = 0, j = size - 1;

    while (i < j) {
        if (arr[i] != arr[j]) {
            return false;
        }

        i++;
        j--;
    }

    return true;
}

int main() {
    char arr[100];

    cout << "Enter a string: ";
    cin >> arr;

    if (PalindromeString(arr, strlen(arr))) {
        cout << "The string is a palindrome." << endl;
    }
    else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}