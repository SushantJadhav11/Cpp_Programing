#include <iostream>
using namespace std;

double power(double base, int exponent); // deceleratiom

// we use deceleration at top cause if not main is not able to access the function defined below the main code.
// hence we either write the code above the main function or declear the function in advance.

// defination
double power(double base, int exponent)
{
    double result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
}

int main()
{
    int base, exponent;
    cout << "What is the base?";
    cin >> base;
    cout << "what is the exponent?";
    cin >> exponent;
    double myPower = power(base, exponent);
    cout << myPower << endl;
}