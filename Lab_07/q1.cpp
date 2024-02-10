#include <iostream>
using namespace std;

// This code wont run because of lack of ';' after function calls

/*
void F1() void F2() void F3()
void main() // A function main should return int
{
    F1() F2() F3()
}
void F1()
{
    F3()
}
void F3()
{
    F2()
}
void F2()
{
    cout << "Functions are interesting" << endl;
}
I fixed it below:
*/

void F1();
void F2();
void F3();
int main()
{
    F1();
    F2();
    F3();
}
void F1()
{
    F3();
}
void F3()
{
    F2();
}
void F2()
{
    cout << "Functions are interesting" << endl;
}