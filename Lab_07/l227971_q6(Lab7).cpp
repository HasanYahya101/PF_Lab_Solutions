#include <iostream>
using namespace std;
int calculate_retail();
int main()
{
	calculate_retail();

}
int calculate_retail()
{
	float original_cost;
	float markup_percentage;
	cout << "**********************************************************" << endl;
	cout << "Enter Whole-Sale Cost (Must be greater than 0): ";
	cin >> original_cost;
	while (original_cost < 1)
	{
		cout << "Invalid Value!" << endl;
		cout << "Enter Whole-Sale Cost (Must be greater than 0): ";
		cin >> original_cost;
	}
	cout << "**********************************************************" << endl;
	cout << "Enter Markup Percentage (Must be greater than 0): ";
	cin >> markup_percentage;
	while (markup_percentage < 1)
	{
		cout << "Invalid Value!" << endl;
		cout << "Enter Markup Percentage (Must be greater than 0): ";
		cin >> markup_percentage;
	}
	cout << endl;
	cout << "Your Whole-Sale Cost is " << original_cost << " rs" << endl;
	cout << "Your Markup Percentage is " << markup_percentage << " %" << endl;
	float final_cost;
	final_cost = original_cost + (original_cost * (markup_percentage / 100));
	cout << endl << "************************************************************" << endl;
	cout << "Final cost: " << final_cost << endl << endl;
	return final_cost;
}