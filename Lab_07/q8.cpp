#include <iostream>
#include <iomanip>
using namespace std;
void displayShape(char shape, int size)
{
    if (shape == 's' || shape == 'S')
    {
        for (int count = 1; count <= size; ++count)
        {
            cout << setw(3) << count << " ";
            for (int count1 = count + count, print = count1; print <= count * size; print = print + count)
            {
                cout << setw(3) << print << " ";
            }
            cout << endl;
        }
    }
    else if (shape == 'T' || shape == 't')
    {
        for (int i = 0; i < size; ++i)
        {
            for (int spaces = 1; spaces < size - i; ++spaces)
            {
                cout << " ";
            }
            for (int j = 0; j <= i; ++j)
            {
                long long int num = 1, diff, diffFact = 1, denom = 1, comb1;

                diff = i - j;
                if (i == 0)
                {
                    num = 1;
                }
                else
                {
                    for (int count = i; count > 0; --count)
                    {
                        num = count * num;
                    }
                }
                if (j == 0)
                {
                    denom = 1;
                }
                else
                {
                    for (int count1 = j; count1 > 0; --count1)
                    {
                        denom = denom * count1;
                    }
                }
                if (diff == 0)
                {
                    diffFact = 1;
                }
                else
                {
                    for (int count2 = diff; count2 > 0; --count2)
                    {
                        diffFact = diffFact * count2;
                    }
                }
                denom = denom * diffFact;
                comb1 = num / denom;
                cout << setw(2) << comb1 << " ";
            }
            cout << endl;
        }
    }
    else
        cout << "Invalid Input" << endl;
}
int main()
{
    char shape;
    int size;
    cout << "Enter S or s for square, and T or t for triangle" << endl;
    cin >> shape;
    cout << "Enter size" << endl;
    cin >> size;
    while (size < 1)
    {
        cout << "Invalid size. Enter size again" << endl;
        cin >> size;
    }
    displayShape(shape, size);
}