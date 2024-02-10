#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    int positiveCount = 0, zeroCount = 0, negativeCount = 0;
    int currentNumber;
    int totalCount = 0;

    cout << "Enter " << N << " numbers:" << endl;

    while (totalCount < N)
    {
        cin >> currentNumber;

        if (currentNumber > 0)
        {
            positiveCount++;
        }
        else if (currentNumber == 0)
        {
            zeroCount++;
        }
        else
        {
            negativeCount++;
        }

        totalCount++;
    }

    // Calculate percentages
    float positivePercentage = (float)positiveCount / N * 100;
    float zeroPercentage = (float)zeroCount / N * 100;
    float negativePercentage = (float)negativeCount / N * 100;

    // Display percentages
    cout << "Percentage of positive numbers: " << positivePercentage << "%" << endl;
    cout << "Percentage of zeros: " << zeroPercentage << "%" << endl;
    cout << "Percentage of negative numbers: " << negativePercentage << "%" << endl;

    return 0;
}
