#include <iostream>
using namespace std;

int main()
{
    // Declare variables to store input numbers and operation
    int num1, num2;
    char operation;

    // Get input from the user
    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::cout << "Enter operation (+, -, *, %, /): ";
    std::cin >> operation;

    // Perform the calculation based on the selected operation
    if (operation == '+')
    {
        std::cout << "Result: " << num1 + num2 << std::endl;
    }
    else if (operation == '-')
    {
        std::cout << "Result: " << num1 - num2 << std::endl;
    }
    else if (operation == '*')
    {
        std::cout << "Result: " << num1 * num2 << std::endl;
    }
    else if (operation == '/')
    {
        // Check for division by zero
        if (num2 != 0)
        {
            std::cout << "Result: " << static_cast<float>(num1) / num2 << std::endl;
        }
        else
        {
            std::cout << "Error: Division by zero is not allowed." << std::endl;
        }
    }
    else if (operation == '%')
    {
        // Check for division by zero
        if (num2 != 0)
        {
            std::cout << "Result: " << num1 % num2 << std::endl;
        }
        else
        {
            std::cout << "Error: Modulo by zero is not allowed." << std::endl;
        }
    }
    else
    {
        std::cout << "Error: Invalid operation. Please enter +, -, *, %, or /." << std::endl;
    }

    system("pause");
    return 0;
}
