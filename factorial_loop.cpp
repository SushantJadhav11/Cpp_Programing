#include <iostream>
using namespace std;

int main()
{
    int fact = 5;
    int factorial = fact;
    for (int i = factorial - 1; i > 1; i--)
    {
        factorial *= i;
    }
    cout << "factorial of " << fact << ":" << factorial;
}