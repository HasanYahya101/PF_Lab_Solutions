#include <iostream>
using namespace std;
int main()
{
	int hf;
	int tr = 0;
	int rf;
	int fr;
	int tfr = 0;
	cout << "*****************************************************************************************************" << endl << endl;
	cout << "How many floors does the hotel have: ";
	cin >> hf;
	cout << endl;
	while (hf < 1)
	{
		cout << "*****************************************************************************************************" << endl << endl;
		cout << endl;
		cout << "Enter value Greater then 0." << endl;
		cout << "How many floors does the hotel have: ";
		cin >> hf;
		cout << endl << endl;
	}
	if (hf >= 13)
	{
		cout << "Since the no of floors id greater then 13 we will skip 13th floor." << endl;
		hf = hf - 1;
	}
	int i = 1;
	cout << endl << "*****************************************************************************************************" << endl << endl;
	while (i <= hf)
	{
		cout << "*****************************************************************************************************" << endl << endl;
		cout << "How many rooms are in floor no " << i << ": ";
		cin >> rf;
		tr = rf + tr;
		cout << "How many rooms are occupied: ";
		cin >> fr;
		i++;
		if (fr > rf)
		{
			cout << endl << "Occupied rooms cannot be greater then total rooms." << endl << endl;
			exit(0);
		}
		tfr = tfr + fr;
		cout << "*****************************************************************************************************" << endl << endl;
	}
	cout << endl << "***************************************************************" << endl << endl;
	cout << "Total Floors are " << hf << "." << endl;
	cout << "Total Rooms are " << tr << "." << endl;
	cout << "Total Rooms occupied are " << tfr << "." << endl;
	cout << "Total Rooms Un-occupied are " << tr - tfr << "." << endl;
	cout << "Percent of Occupied rooms are " << tfr * 100 /tr << " percent." << endl;
	cout << endl;
	return 0;

}