#include <iostream>
using namespace std;

int main()
{
    char character;
    char sentence[100];

    cout << "Enter a character: ";
    cin >> character;
    cin.ignore();

    cout << "Enter a sentence: ";
    cin.getline(sentence, 100);

    // Deleting the character from the sentence
    int i, j;
    for (i = 0, j = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] != character)
        {
            sentence[j++] = sentence[i];
        }
    }
    sentence[j] = '\0';

    cout << "Output: " << sentence << endl;

    return 0;
}
