#include <iostream>
using namespace std;

int main()
{
    double salary;

    // Input salary from user
    cout << "Enter your salary: ";
    cin >> salary;

    // Task 1: Calculate gross salary for next 5 years with 3% increment and 1.5% tax deduction
    cout << "Task 1:\n";
    for (int year = 1; year <= 5; ++year)
    {
        salary *= 1.03;        // 3% increment
        salary *= (1 - 0.015); // 1.5% tax deduction
        cout << "Year " << year << " Gross Salary: " << salary << endl;
    }

    // Reset salary for the next tasks
    salary = 100; // Reset salary to the initial value

    // Task 2: Calculate gross salary for next 5 years with 14% increment and 10% tax deduction
    cout << "\nTask 2:\n";
    for (int year = 1; year <= 5; ++year)
    {
        salary *= 1.14;      // 14% increment
        salary *= (1 - 0.1); // 10% tax deduction
        cout << "Year " << year << " Gross Salary: " << salary << endl;
    }

    // Reset salary for the next task
    salary = 100; // Reset salary to the initial value

    // Task 3: Calculate gross salary for each of the next 5 years with alternating increment and tax deduction
    cout << "\nTask 3:\n";
    double totalGrossSalary = 0;
    for (int year = 1; year <= 5; ++year)
    {
        double increment = (year % 2 == 1) ? 0.03 : 0.14;    // Alternating increment
        double taxDeduction = (year % 2 == 1) ? 0.015 : 0.1; // Alternating tax deduction

        salary *= (1 + increment);
        salary *= (1 - taxDeduction);

        totalGrossSalary += salary;

        cout << "Year " << year << " Gross Salary: " << salary << endl;
    }

    // Check if total gross salary is even or odd
    cout << "\nTotal Gross Salary for all 5 years: " << totalGrossSalary << endl;
    cout << "Total Gross Salary is " << (int(totalGrossSalary) % 2 == 0 ? "even" : "odd") << endl;

    return 0;
}