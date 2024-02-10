#include <iostream>
using namespace std;

int main()
{
    int N;

    // Get the value of N from the user
    std::cout << "Enter the value of N: ";
    std::cin >> N;

    if (N <= 0)
    {
        cout << "Invalid input for N. Please enter a positive integer." << std::endl;
        exit(0);
    }

    // Initialize variables for the largest and smallest integers
    int largest, smallest;

    // Read the first number
    std::cout << "Enter number 1: ";
    std::cin >> largest;
    smallest = largest;

    int i = 2;
    while (i <= N)
    {
        int currentNumber;
        std::cout << "Enter number " << i << ": ";
        std::cin >> currentNumber;

        // Update largest if the current number is larger
        if (currentNumber > largest)
        {
            largest = currentNumber;
        }

        // Update smallest if the current number is smaller
        if (currentNumber < smallest)
        {
            smallest = currentNumber;
        }

        i++;
    }

    // Display the largest and smallest integers
    std::cout << "Largest integer: " << largest << std::endl;
    std::cout << "Smallest integer: " << smallest << std::endl;

    system("pause");
    return 0;
}
