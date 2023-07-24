#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, int1 = 0;
	int i = 0;
	a = 0;
	b = 0;
	c = 0;
	d = 0;
	while (i < 20)
	{
		cout << "What is your Section:" << endl;
		cout << "1)A  2)B  3)C  4)D" << endl;
		i++;
		cin >> int1;
		if (int1 != 1 && int1 != 2 && int1 != 3 && int1 != 4)
		{
			cout << "Enter valid value 1, 2, 3, 4.";
			cout << endl;
			exit(0);
		}
		if (int1 == 1)
		{
			a++;
		}
		if (int1 == 2)
		{
			b++;
		}
		if (int1 == 3)
		{
			c++;
		}
		if (int1 == 4)
		{
			d++;
		}


	}
	cout << endl << "**********************************************************************" << endl << endl;
	cout << "A was selected these many times: " << a << endl;
	cout << "B was selected these many times: " << b << endl;
	cout << "C was selected these many times: " << c << endl;
	cout << "D was selected these many times: " << d << endl;
	return 0;
}
