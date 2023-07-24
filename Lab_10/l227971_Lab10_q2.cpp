#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	const int Size = 100;
	char ch;
	int i, position;
	char character, String[Size];
	do
	{
		cout << "Enter a string: ";
		cin.getline(String, Size);
		int count = 0;
		for (i = 0; i < strlen(String); i++)
		{
			if (isalpha(String[i]))
			{
				count++;
			}
		}
		cout << "Total characters are: " << count << endl;
		cout << "Do you want to test another function? (Y/N): ";
		cin >> ch;
		cin.ignore();
	} while (ch == 'y' || ch == 'Y');
	return 0;
}