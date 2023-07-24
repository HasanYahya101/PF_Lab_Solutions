#include <iostream>
using namespace std;

void displaySquare(int size) {
    for (int row = 1; row <= size; row++) {
        for (int col = 1; col <= size; col++) {
            cout << row * col << " ";
        }
        cout << endl;
    }
}

void displayTriangle(int size)
{
    for (int i = 0; i < size; i++)
    {
        int val = 1;
        for (int j = 1; j < (size - i); j++)
        {
            cout << "   ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << "      " << val;
            val = val * (i - k) / (k + 1);
        }
        cout << endl << endl;
    }

}
int main()
{
    char shapeType;
    int size;
    cout << "Enter Shape Type S or T: ";
    cin >> shapeType;
    cout << "Enter Size: ";
    cin >> size;
    if (shapeType == 'S')
    {
        displaySquare(size);
    }
    else if (shapeType == 'T')
    {
        displayTriangle(size);
    }
    else
    {
        cout << "Invalid Shape Type" << endl;
    }
    return 0;
}
