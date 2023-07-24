#include <iostream>
using namespace std;
const int size = 10;
void getData(int arr[]);
void sortData(int arr[]);
int searchData(int arr[], int n);
int main()
{
	const int size = 10;
	int arr[size];
	getData(arr);
	sortData(arr);
	int n;
	cout << "Enter any number to find: ";
	cin >> n;
	cout << endl;
	int index = searchData(arr, n);
	if (index != -1)
		cout << "Value " << n << " is found in index/array " << index << ".\n";
	else
		cout << "Value is not found.\n";

	return 0;
}

void getData(int arr[])
{
	const int size = 10;
	int a = 1;
	int i = 0;
	while (a <= 10)
	{
		cout << "Enter value of Integer " << a << ": ";
		cin >> arr[i];
		cout << endl;
		a++;
		i++;
	}
	
}

void sortData(int arr[])
{
	const int size = 10;
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << endl;
	cout << "Sorted Array in ascending order: ";
	for (int i = 0; i < size; i++)
		cout << arr[i] << ", ";
	cout << "\b\b.\n";
	cout << endl;
}

int searchData(int arr[], int n)
{
	const int size = 10;
	int low = 0, high = size - 1, mid;
	while (low <= high) {
		mid = (low + high) / 2;
		if (arr[mid] == n)
			return mid;
		else if (arr[mid] > n)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return -1;
}