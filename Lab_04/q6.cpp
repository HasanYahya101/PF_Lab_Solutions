#include <iostream>
using namespace std;

int main()
{
    char choice;
    do
    {
        double num1, num2, result;
        char operation;

        // Get user input
        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;

        cout << "Choose operation (+, -, *, /): ";
        cin >> operation;

        // Perform calculation using switch case
        switch (operation)
        {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = (num2 != 0) ? num1 / num2 : 0; // Check for division by zero
            break;
        default:
            cout << "Invalid operation!" << endl;
            result = 0;
        }

        // Display result
        cout << "Result: " << result << endl;

        // Ask user if they want to continue
        cout << "Do you want to continue? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Program terminated." << endl;

    system("pause");
    return 0;
}
