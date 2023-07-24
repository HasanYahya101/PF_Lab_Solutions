#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//declare index to be 6
	const int index = 6;
	//create two 2d arrays called array 1 and array 2 using size of index
	int array1[index][index];
	int array2[index][index];
	//Enter values in array1 using a for loop
	cout << "Enter values in Array1: " << endl;
	for (int i = 0; i < index; i++)
	{
		for (int j = 0; j < index; j++)
		{
			cin >> array1[i][j];
		}
	}
	//Enter values in array2 using a for loop
	cout << "Enter values in Array2: " << endl;
	for (int i = 0; i < index; i++)
	{
		for (int j = 0; j < index; j++)
		{
			cin >> array2[i][j];
		}
	}
	//use ofstream to open file record1
	ofstream record1;
	record1.open("record1.txt");
	//Enter value into file record1.txt in form of a matrix, ie 6 integers in first line, 6 in 2nd etx untill 6th line, and add space between, each integer
	for (int i = 0; i < index; i++)
	{
		for (int j = 0; j < index; j++)
		{
			record1 << array1[i][j] << " ";
		}
		record1 << endl;
	}
	//close file record1
	record1.close();
	//use ofstream to open file record2
	ofstream record2;
	record2.open("record2.txt");
	//Enter value into file record2.txt in form of a matrix, ie 6 integers in first line, 6 in 2nd etx untill 6th line, and add space between, each integer
	for (int i = 0; i < index; i++)
	{
		for (int j = 0; j < index; j++)
		{
			record2 << array2[i][j] << " ";
		}
		record2 << endl;
	}
	//close file record2
	record2.close();
	//use ifstream to open file record1
	ifstream recordOne;
	recordOne.open("record1.txt");
	//use ifstream to open file record2
	ifstream recordTwo;
	recordTwo.open("record2.txt");
	//Compare both arrays array1 and array2 by indexes in both files and enter the unique elements found in both files record1 and record2 in Output.txt with spaces between them
	ofstream Output;
	Output.open("Output.txt");
	for (int i = 0; i < index; i++)
	{
		for (int j = 0; j < index; j++)
		{
			if (array1[i][j] != array2[i][j])
			{
				Output << array1[i][j] << " ";
				Output << array2[i][j] << " ";
			}
		}
	}
	//close file Output
	Output.close();
	//close file record1
	recordOne.close();
	//close file record2
	recordTwo.close();
	//Display the Unique elements in Output.txt
	ifstream Output1;
	Output1.open("Output.txt");
	int a;
	cout << "Unique Elements are: " << endl;
	int counter = 0;
	while (Output1 >> a)
	{
		cout << a << " ";
		if (counter == 8)
		{
			cout << endl;
			counter = 0;
		}
		counter++;
	}
	//close file Output1
	Output1.close();
	return 0;
}