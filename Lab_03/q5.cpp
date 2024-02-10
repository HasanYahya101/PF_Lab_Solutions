#include <iostream>
using namespace std;

int main()
{
    // take alphabet as input and tell if it is vowel or consonent, it can be capital or small
    char alphabet;
    cout << "Enter an alphabet : ";
    cin >> alphabet;
    while (!((alphabet >= 'a' && alphabet <= 'z') || (alphabet >= 'A' && alphabet <= 'Z')))
    {
        cout << "Enter a valid alphabet : ";
        cin >> alphabet;
    }

    if (alphabet == 'a' || alphabet == 'A')
        cout << "It is a vowel" << endl;
    else if (alphabet == 'e' || alphabet == 'E')
        cout << "It is a vowel" << endl;
    else if (alphabet == 'i' || alphabet == 'I')
        cout << "It is a vowel" << endl;
    else if (alphabet == 'o' || alphabet == 'O')
        cout << "It is a vowel" << endl;
    else if (alphabet == 'u' || alphabet == 'U')
        cout << "It is a vowel" << endl;
    else
        cout << "It is a consonent" << endl;

    system("pause");
    return 0;
}