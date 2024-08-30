#include <iostream>
#include <cmath> //
using namespace std;
int main()
{
    cout << sqrt(25) << endl;
    cout << sqrt(-25) << endl;     // will give nan that means not a number
    cout << pow(9, 2000) << endl;  // infinity
    cout << pow(-9, 9000) << endl; // gives negative infinity
    cout << remainder(10, 2.5);
    cout << fmod(10, 2.5) << endl; // % cant be used for float values
    cout << fmax(5, 6) << endl;    // works for 2 numbers
    cout << ceil(7.45) << endl;    // always goes up
    cout << floor(7.56) << endl;   // always goes down
    cout << trunc(-5.78) << endl;  // removes values after point
    cout << floor(-5.78) << endl;
    cout << round(5.5);
}