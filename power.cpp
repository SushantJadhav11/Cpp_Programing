// comments are no read by the complier.
/*hi everyone
this the way
to wtite comments that are multiline.*/

// functions
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int base, exponent;
    cout << "What is the base?";
    cin >> base;
    cout << "what is the exponent?";
    cin >> exponent;
    double power = pow(base, exponent);
    cout << power;
}