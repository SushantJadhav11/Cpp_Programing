#include <iostream>
#include <float.h>
using namespace std;
int main()
{
    float a = 10.0 / 3; // correct upto six spaces.
    a = a * 100000000;
    double b;      // 7.7E4 = 7.7 * 10^4=77000 //upto 15 places
    long double c; // upto 18 places.
    cout << fixed << a << endl;
    cout << DBL_DIG << endl;
}