#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    const int Size = 100;
    char sentence[Size];
    char word[Size];
    int length[Size];
    int i = 0, j = 0, k = 0, min = 0;

    cout << "Enter a sentence: ";
    cin.getline(sentence, Size);

    while (sentence[i] != '\0')
    {
        if (sentence[i] == ' ')
        {
            word[j] = '\0';
            length[k] = j;
            j = 0;
            k++;
        }
        else
        {
            word[j] = sentence[i];
            j++;
        }
        i++;
    }
    word[j] = '\0';
    length[k] = j;

    min = length[0];
    for (i = 1; i <= k; i++)
    {
        if (length[i] < min)
        {
            min = length[i];
        }
    }

    cout << "Length for each word: ";
    for (i = 0; i <= k; i++)
    {
        cout << length[i] << ", ";
    }
    cout << endl;

    cout << "Min: " << min << endl;
    cout << "Min word: ";
    for (i = 0; i <= k; i++)
    {
        if (length[i] == min)
        {
            for (j = 0; j < min; j++)
            {
                cout << word[j];
                
            }
            cout << endl;
            return 0;
        }
    }

    //return 0;
}
