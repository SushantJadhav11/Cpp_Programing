#include <iostream>
using namespace std;

double power(double base, int exponent)
{
    double result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
}
void print_paw(double base, int exponent)
{
    double mypower = power(base, exponent);
    cout << base << " raise to the power " << exponent << " is " << mypower;
}
int main()
{
    int base, exponent;
    cout << "What is the base";
    cin >> base;
    cout << "What is the exponent?";
    cin >> exponent;
    print_paw(base, exponent);
    print_paw(5, 3);
}