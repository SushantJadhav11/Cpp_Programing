#include <iostream>
using namespace std;
int base, exponent;

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
    cout << "What is the base";
    cin >> base;
    cout << "What is the exponent?";
    cin >> exponent;
    double mypower = power(base, exponent);
    cout << mypower;
}