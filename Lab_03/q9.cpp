#include <iostream>
using namespace std;

int main()
{
    float gpa;
    cout << "Enter your GPA : ";
    cin >> gpa;
    while (gpa < 0)
    {
        cout << "Enter a valid GPA : ";
        cin >> gpa;
    }

    if (gpa >= 3.5 && gpa <= 4.00)
    {
        cout << "Highest Honors for Semester" << endl;
    }
    else if (gpa >= 3.0 && gpa < 3.49)
    {
        cout << "Deans List for Semester" << endl;
    }
    else if (gpa >= 2.0 && gpa < 2.99)
    {
        cout << "(no message)" << endl;
    }
    else if (gpa >= 1.0 && gpa < 1.99)
    {
        cout << "On probation for Next Semester" << endl;
    }
    else if (gpa >= 0.0 && gpa < 0.99)
    {
        cout << "Failed Semester --- Registration Suspended" << endl;
    }

    system("pause");
    return 0;
}