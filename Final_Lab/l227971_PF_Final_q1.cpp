#include <iostream>
#include <fstream>
using namespace std;

#define size 4  //size of 2d array

//Function to store the data in a txt file
void storeData(int arr[][size])
{
    ofstream outfile;
    outfile.open("Data.txt"); //open the file

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            outfile << arr[i][j] << " ";
        }
        outfile << endl;
    }
    outfile.close(); //close the file
}

//Function to take transpose of the matrix
void transposeMatrix(int arr[][size])
{
    int transpose[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            transpose[i][j] = arr[j][i];
        }
    }
    cout << "\nThe transposed matrix is: \n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    storeData(transpose); //call the storeData function to store the transposed matrix in the file
}

//Function to read the data from the file
void readData(int arr[][size])
{
    ifstream infile;
    infile.open("Data.txt");

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            infile >> arr[i][j];
        }
    }
    infile.close();
}

//Function to display the matrix
void displayMatrix(int arr[][size])
{
    cout << "The matrix is: \n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int input[size][size];

    cout << "Enter the values in the 4x4 matrix (enter value and press enter): \n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> input[i][j];
        }
    }

    storeData(input); //call the storeData function to store the entered matrix in the file

    readData(input); //call the readData function to read the matrix from the file

    displayMatrix(input); //call the displayMatrix function to display the matrix

    transposeMatrix(input); //call the transposeMatrix function to take the transpose of the matrix

    return 0;
}