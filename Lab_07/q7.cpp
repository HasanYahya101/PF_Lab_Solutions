#include <iostream>
using namespace std;

double DistanceFallen(double t)
{
    double g = 9.8;
    double d = 0.5 * g * t * t;
    return d;
}

int main()
{
    for (int t = 1; t <= 10; t++)
    {
        double distance = DistanceFallen(t);
        cout << "Time: " << t << " seconds, Distance: " << distance << " meters" << endl;
    }
    return 0;
}
