#include <iostream>

using namespace std;

const int Size = 5;

void Compare(char[], char[]);
void CopyAndCompare(char[], char[]);

int main()
{
	int choice = 0;

	char Array1[Size];
	char Array2[Size];

	do {
		cout << "Menu: " << endl;
		cout << "1. Compare two char arrays" << endl;
		cout << "2. Copy contents of 1 array into other and then compare both" << endl;
		cout << "3. Exit" << endl;

		cout << "Enter your choice: ";
		cin >> choice;

		switch (choice) {
		case 1:
			cout << "Enter the contents of the first array: ";
			for (int i = 0; i < Size; i++)
				cin >> Array1[i];

			cout << "Enter the contents of the second array: ";
			for (int i = 0; i < Size; i++)
				cin >> Array2[i];

			Compare(Array1, Array2);
			break;
		case 2:
			cout << "Enter the contents of the first array: ";
			for (int i = 0; i < Size; i++)
				cin >> Array1[i];

			CopyAndCompare(Array1, Array2);
			break;
		case 3:
			cout << "Program has been successfully terminated!!!" << endl;
			break;
		default:
			cout << "Invalid choice!" << endl;
		}
	} while (choice != 3);

	return 0;
}

void Compare(char Array1[], char Array2[])
{
	int result = 0;

	for (int i = 0; i < Size; i++) {
		if (Array1[i] == Array2[i])
			result = 1;
		else {
			result = 0;
			break;
		}
	}

	if (result == 1)
		cout << "The two arrays are equal." << endl;
	else
		cout << "The two arrays are not equal." << endl;
}

void CopyAndCompare(char Array1[], char Array2[])
{
	// Copy contents of Array1 to Array2

	for (int i = 0; i < Size; i++)
		Array2[i] = Array1[i];

	int result = 0;

	for (int i = 0; i < Size; i++) {
		if (Array1[i] == Array2[i])
			result = 1;
		else {
			result = 0;
			break;
		}
	}

	if (result == 1)
		cout << "The two arrays are equal." << endl;
	else
		cout << "The two arrays are not equal." << endl;
}