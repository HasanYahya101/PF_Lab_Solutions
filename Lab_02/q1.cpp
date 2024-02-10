#include <iostream>
#include <cstdlib> //this is a library for producing a random error
using namespace std;
int main()
{
    int num1, num2, num3, even; // data type for three numbers
    float average;              // data type for average	double random; //declared data type for a random number
    double random;
    cout << "enter three numbers : " << endl; // asks the user for input
    cin >> num1 >> num2 >> num3;              // stores the numbers

    average = ((double)num1 + (double)num2 + (double)num3) / 3;          // formula for average
    cout << "the average of the three numbers is = " << average << endl; // displays the average of three numbers

    srand(time(0)); // function for generating a random number
    cout << "the random number is = " << rand() << endl;
    random = average / rand();

    cout << "by dividing average by a random number we get = " << random << endl;

    even = (int)random % 2; // formula for checking if the number is even

    cout << "now to check if the number is even, we use the modulus operator. if the number is even then the result is 1 and if the number is odd then result is 0 " << endl;
    cout << "result = " << even << endl;
    system("pause");
    return 0;
}