#include <iostream>
using namespace std;

int main()
{
    int age1, age2, age3;
    // print oldest age and youngest age
    cout << "Enter three ages : ";
    cin >> age1 >> age2 >> age3;

    int oldest;
    int yongest;

    for (int i = 0; i < 3; i++)
    {
        if (age1 > age2 && age1 > age3)
        {
            oldest = age1;
            if (age2 > age3)
                yongest = age3;
            else
                yongest = age2;
        }
        else if (age2 > age1 && age2 > age3)
        {
            oldest = age2;
            if (age1 > age3)
                yongest = age3;
            else
                yongest = age1;
        }
        else if (age3 > age1 && age3 > age2)
        {
            oldest = age3;
            if (age1 > age2)
                yongest = age2;
            else
                yongest = age1;
        }
    }

    cout << "Oldest age is : " << oldest << endl;
    cout << "Youngest age is : " << yongest << endl;

    system("pause");
    return 0;
}