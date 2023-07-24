#include <iostream>
using namespace std;
void getData(int[], int);
int countEven(int[], int);
void findMinMax(int[], int, int&, int&);
int searchData(int[], int, int);
int main()
{
    
    const int SIZE = 6;
    int array[SIZE];
    getData(array, SIZE);
    int count = countEven(array, SIZE);
    cout << "There are about " << count << " even values." << endl;
    cout << endl;
    int min, max;
    findMinMax(array, SIZE, min, max);
    cout << "The minimum value is: " << min << "." << endl;
    cout << endl;
    cout << "The maximum value is: " << max << "." << endl;
    cout << endl;

    int numbers[SIZE];
    int key;
    cout << "Enter a value to search for: ";
    cin >> key;
    int index = searchData(array, SIZE, key);
    cout << endl;
    if (index != -1)
    {
        cout << "Found at index/array: " << index << "." << endl;
    }
    else
    {
        cout << "Value Not found." << endl;
    }
    cout << endl;
    
    
        return 0;
}

void getData(int array[], int size)
{
    for (int index = 0; index < size; index++)
    {
        cout << "Enter integer " << (index + 1) << ": ";
        cin >> array[index];
    }
}

int countEven(int array[], int size)
{
    cout << endl;
    cout << "Even Values are as Under: " << endl;
    int count = 0; 
    for (int index = 0; index < size; index++)
    {
        if (array[index] % 2 == 0)
        {
            count++;
        }
    }

   // return count;

    for (int index = 0; index < size; index++)
    {
        if (array[index] % 2 == 0)
        {
            cout << array[index] << endl;
        }
    }
    cout << endl;
    return count;

}

void findMinMax(int array[], int size, int& min, int& max)
{
    min = max = array[0]; 
    for (int index = 1; index < size; index++)
    {
        if (array[index] < min)
        {
            min = array[index];
        }

        if (array[index] > max)
        {
            max = array[index];
        }
    }
}

int searchData(int array[], int size, int key)
{
    for (int index = 0; index <= size; index++)
    {
        if (array[index] == key)
        {
            return index;
        }
    }
    
//else reurn value given below:
    return -1;
}

