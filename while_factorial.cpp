#include <iostream>
#include <string>
using namespace std;

int main()
{
    int factorial = 7;
    int i = factorial - 1;
    while (i > 1)
    {
        factorial *= i;
        i--;
    }
    cout << factorial;
}