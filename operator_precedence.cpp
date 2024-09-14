#include <iostream>
using namespace std;
int main()
{
    // double x = 10.0 / 4;
    // cout << x;
    double x;
    double y;
    x = 10;
    y = x = 100; //(y=x)=100 has different meaning due to associativity
    cout << x << "\t" << y << endl;
}
