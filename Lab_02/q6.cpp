#include <iostream>
using namespace std;

int main()
{
    // Convert your first name into ASCI and check if it’s Odd or Even
    string name = "Hasan";
    int sum = 0;
    for (int i = 0; i < name.length(); i++)
    {
        sum += name[i];
    }
    cout << "Sum of ASCII values of characters in your name is : " << sum << endl;
    if (sum % 2 == 0)
        cout << "Sum is even" << endl;
    else
        cout << "Sum is odd" << endl;

    // decrease each letter 4 times and display the result
    string dec_name = name;
    for (int j = 0; j < dec_name.length(); j++)
    {
        dec_name[j] = dec_name[j] - 4;
    }
    cout << dec_name << endl;

    // now increase for times
    string inc_name = name;
    for (int k = 0; k < inc_name.length(); k++)
    {
        inc_name[k] = inc_name[k] + 4;
    }
    cout << inc_name << endl;

    system("pause");
    return 0;
}