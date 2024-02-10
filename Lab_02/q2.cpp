#include <iostream>
using namespace std;

int main()
{
    string str1, str2, str3, str4;
    cout << "Enter four strings : " << endl;
    cin >> str1 >> str2 >> str3 >> str4;

    cout << "The strings you entered are : " << endl;
    string result = str1 + " " + str2 + " " + str3 + " " + str4;
    cout << result << endl;

    system("pause");
    return 0;
}