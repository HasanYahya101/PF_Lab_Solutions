#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    int num;
    int odd = 0;
    int even = 0;
    string line;
    ifstream myfile("Numbers.txt");
    ofstream oddfile("odd.txt");
    ofstream evenfile("even.txt");
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            num = stoi(line);
            if (num % 2 == 0)
            {
                even++;
                evenfile << num << endl;
            }
            else
            {
                odd++;
                oddfile << num << endl;
            }
        }
        myfile.close();
        oddfile.close();
        evenfile.close();
    }
    else cout << "Unable to open file";
    cout << "There are " << odd << " odd numbers in the file." << endl;
    cout << "There are " << even << " even numbers in the file." << endl;
    return 0;
}