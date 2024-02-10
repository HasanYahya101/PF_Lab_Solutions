#include <iostream>
using namespace std;

int main()
{
    char sentence[100];
    cout << "Enter a sentence: ";
    cin.getline(sentence, 100);

    int length = 0;
    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] != ' ')
        {
            length++;
        }
    }

    cout << "Total characters are: " << length << endl;

    return 0;
}
