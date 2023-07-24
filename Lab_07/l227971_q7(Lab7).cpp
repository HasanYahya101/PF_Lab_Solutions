#include <iostream>
using namespace std;
double DistanceFallen(double time);
int main() {
    for (int i = 1; i <= 10; i++) 
    {
        cout << "The object has fallen " << DistanceFallen(i) << " meters in " << i << " seconds." << endl;
    }
}
double DistanceFallen(double time)
{
    double d = 0.5 * 9.8 * time * time;
    return d;
}