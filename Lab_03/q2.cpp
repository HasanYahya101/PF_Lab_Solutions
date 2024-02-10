#include <iostream>
using namespace std;

int main()
{
    int weight;
    int height;

    cout << "Enter your weight in pounds : ";
    cin >> weight;
    while (weight < 1)
    {
        cout << "Enter a valid weight : ";
        cin >> weight;
    }
    cout << "Enter your height in inches : ";
    cin >> height;
    while (height < 1)
    {
        cout << "Enter a valid height : ";
        cin >> height;
    }

    int BMI = (weight * 703) / (height * height);

    cout << "Your BMI is : " << BMI << endl;

    if (BMI >= 18.5 && BMI <= 25)
        cout << "You are optimal" << endl;
    else if (BMI < 18.5)
        cout << "You are underweight" << endl;
    else if (BMI > 25)
        cout << "You are overweight" << endl;

    system("pause");
    return 0;
}