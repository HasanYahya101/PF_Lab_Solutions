#include <iostream>
using namespace std;

int main()
{
    int total; // Assume total is the sum of n numbers
    int n;     // Assume n is the number of elements

    // Input values for total and n
    std::cout << "Enter the sum of numbers (total): ";
    std::cin >> total;

    std::cout << "Enter the number of elements (n): ";
    std::cin >> n;

    if (n > 0)
    {
        double average = static_cast<double>(total) / n;
        std::cout << "The average is: " << average << std::endl;
    }
    else
    {
        std::cout << "Error: Cannot compute average for zero or negative values of n." << std::endl;
    }

    system("pause");
    return 0;
}
