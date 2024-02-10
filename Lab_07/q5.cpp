#include <iostream>
using namespace std;

// Function to calculate the retail price
double calculateRetail(double wholesaleCost, double markupPercentage)
{
    // Input validation
    if (wholesaleCost < 0 || markupPercentage < 0)
    {
        cout << "Invalid input. Wholesale cost and markup percentage must be positive." << endl;
        return 0;
    }

    // Calculate the retail price
    double retailPrice = wholesaleCost + (wholesaleCost * markupPercentage / 100);
    return retailPrice;
}

int main()
{
    double wholesaleCost, markupPercentage;

    // Get input from the user
    cout << "Enter the wholesale cost: ";
    cin >> wholesaleCost;
    cout << "Enter the markup percentage: ";
    cin >> markupPercentage;

    // Calculate and display the retail price
    double retailPrice = calculateRetail(wholesaleCost, markupPercentage);
    cout << "The retail price is: " << retailPrice << endl;

    return 0;
}