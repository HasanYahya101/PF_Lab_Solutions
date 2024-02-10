#include <iostream>
using namespace std;

int main()
{
    int rows = 15; // Number of rows in the pattern

    // Upper half of the pattern
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < rows * 2; ++j)
        {
            if (j < rows - i || j >= rows + i)
                std::cout << "=";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }

    // Lower half of the pattern
    for (int i = rows - 2; i >= 0; --i)
    {
        for (int j = 0; j < rows * 2; ++j)
        {
            if (j < rows - i || j >= rows + i)
                std::cout << "=";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
