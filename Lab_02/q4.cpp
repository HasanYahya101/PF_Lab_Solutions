#include <iostream>
using namespace std;

int main()
{
    string var;
    cout << "Enter a string : " << endl;
    cin >> var;

    // convert to int
    int result = stoi(var);
    cout << "The integer you entered is : " << endl;
    cout << result << endl;
    cout << "Original String is : " << endl;
    cout << var << endl;

    system("pause");
    return 0;
}