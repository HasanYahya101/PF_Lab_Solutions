#include <iostream>
using namespace std;

int main()
{
    int n;

    // Get user input for N
    std::cout << "Enter the value of N: ";
    std::cin >> n;

    // Check if N is less than or equal to 0
    if (n <= 0)
    {
        std::cout << "Please enter a valid positive integer for N." << std::endl;
        exit(0);
    }

    // Initialize variables for Fibonacci sequence
    int first = 0, second = 1, next;

    // Print the Fibonacci sequence up to the Nth member
    std::cout << "Fibonacci sequence up to the " << n << "th member: ";

    int i = 0;
    while (i < n)
    {
        std::cout << first << ", ";

        next = first + second;
        first = second;
        second = next;

        i++;
    }

    std::cout << std::endl;

    system("pause");
    return 0;
}
