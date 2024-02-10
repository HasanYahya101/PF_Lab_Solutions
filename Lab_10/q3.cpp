#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const int MAX_SIZE = 100;
    char sentence[MAX_SIZE];
    int wordLength[MAX_SIZE];
    int wordCount = 0;
    int minLength = MAX_SIZE;

    cout << "Enter a sentence: ";
    cin.getline(sentence, MAX_SIZE, '.');

    // Separate each word and find the word with minimum length
    char *word = strtok(sentence, " ");
    while (word != NULL)
    {
        int length = strlen(word);
        wordLength[wordCount] = length;
        if (length < minLength)
        {
            minLength = length;
        }
        wordCount++;
        word = strtok(NULL, " ");
    }

    // Display the lengths of each word
    for (int i = 0; i < wordCount; i++)
    {
        cout << wordLength[i] << " ";
    }

    cout << "\nMin: " << minLength << endl;

    return 0;
}
