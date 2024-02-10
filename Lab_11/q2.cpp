#include <iostream>
#include <fstream>
using namespace std;

void encryptData()
{
    char data[101];
    ifstream inputFile("input.txt");
    if (inputFile.is_open())
    {
        inputFile.getline(data, 101);
        inputFile.close();

        for (int i = 0; data[i] != '\0'; i++)
        {
            if (data[i] >= 'a' && data[i] <= 'z')
            {
                data[i] = (data[i] - 'a' + 1) % 26 + 'a';
            }
            else if (data[i] >= 'A' && data[i] <= 'Z')
            {
                data[i] = (data[i] - 'A' + 1) % 26 + 'A';
            }
        }

        cout << "Encrypted data: " << data << endl;

        ofstream outputFile("encrypt.txt");
        if (outputFile.is_open())
        {
            outputFile << data;
            outputFile.close();
        }
        else
        {
            cout << "Failed to open encrypt.txt" << endl;
        }
    }
    else
    {
        cout << "Failed to open input.txt" << endl;
    }
}

void decryptData()
{
    char data[101];
    ifstream inputFile("encrypt.txt");
    if (inputFile.is_open())
    {
        inputFile.getline(data, 101);
        inputFile.close();

        for (int i = 0; data[i] != '\0'; i++)
        {
            if (data[i] >= 'a' && data[i] <= 'z')
            {
                data[i] = (data[i] - 'a' - 1 + 26) % 26 + 'a';
            }
            else if (data[i] >= 'A' && data[i] <= 'Z')
            {
                data[i] = (data[i] - 'A' - 1 + 26) % 26 + 'A';
            }
        }

        cout << "Decrypted data: " << data << endl;

        ofstream outputFile("decrypt.txt");
        if (outputFile.is_open())
        {
            outputFile << data;
            outputFile.close();
        }
        else
        {
            cout << "Failed to open decrypt.txt" << endl;
        }
    }
    else
    {
        cout << "Failed to open encrypt.txt" << endl;
    }
}

int main()
{
    int choice;
    cout << "Menu:" << endl;
    cout << "1. Encrypt data" << endl;
    cout << "2. Decrypt data" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        encryptData();
        break;
    case 2:
        decryptData();
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }

    return 0;
}
