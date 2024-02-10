#include <iostream>
using namespace std;

int main()
{
    // Get input from the user
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Validate input (non-negative integer)
    if (number < 0)
    {
        std::cout << "Factorial is undefined for negative numbers." << std::endl;
        exit(0);
    }

    // Calculate factorial using a while loop
    int factorial = 1;
    while (number > 0)
    {
        factorial *= number;
        number--;
    }

    // Display the result
    std::cout << "Factorial: " << factorial << std::endl;

    return 0; // Exit successfully
}
