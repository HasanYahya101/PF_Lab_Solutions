#include <iostream>
using namespace std; 
int main() 
{ 
	int n1; 
	float total = 0; 
	int q1; 
	do 
	{ cout << "Enter the value of n: ";
	cin >> n1; 
	cout << endl;
	for (int i = 2; i <= n1; i += 2) 
	{ 
		total = total + (1.0 / i); 
	} 
	cout << "Sum of the series is " << total;
	cout << endl << endl;
	cout << "Do you want to continue ? (1 for yes, 0 or any-other number for no): ";
	cin >> q1; 
	}
	while (q1 == 1); 
	return 0; 
}