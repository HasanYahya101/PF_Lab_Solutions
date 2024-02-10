#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // open Numbers.txt and read the numbers '1 2 3 4 5 6' from it, written in that order
    ifstream file("Numbers.txt");
    int nums[6];
    for (int i = 0; i < 6; i++)
    {
        file >> nums[i];
    }
    file.close();
    // print the numbers
    for (int i = 0; i < 6; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    // clear Even.txt and Odd.txt and insert even numbers in Even.txt and odd numbers in Odd.txt
    ofstream evenFile("Even.txt");
    ofstream oddFile("Odd.txt");
    for (int i = 0; i < 6; i++)
    {
        if (nums[i] % 2 == 0)
        {
            evenFile << nums[i] << " ";
        }
        else
        {
            oddFile << nums[i] << " ";
        }
    }
    evenFile.close();
    oddFile.close();
    // Now open Even.txt and Odd.txt and print the numbers in them
    ifstream evenFileRead("Even.txt");
    ifstream oddFileRead("Odd.txt");
    int evenNums[3], oddNums[3];
    for (int i = 0; i < 3; i++)
    {
        evenFileRead >> evenNums[i];
        oddFileRead >> oddNums[i];
    }
    evenFileRead.close();
    oddFileRead.close();
    cout << "Even numbers: ";
    for (int i = 0; i < 3; i++)
    {
        cout << evenNums[i] << " ";
    }
    cout << endl;
    cout << "Odd numbers: ";
    for (int i = 0; i < 3; i++)
    {
        cout << oddNums[i] << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}