#include <iostream>
using namespace std;
int main()
{
	int num1, num2, i;

	cout << "Enter start number: ";
	cin >> num1;
	cout << "Enter end number: ";
	cin >> num2;
	cout << endl;
	i = num1;
	cout << "The Odd numbers are: ";
	do
	{
		if (i % 2 != 0)
		{
			cout << i << ", ";
		}

		i++;
	} while (i <= num2);
	cout << endl;

	return 0;

}

