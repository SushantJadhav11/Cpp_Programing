#include <iostream>
using namespace std;
int main()
{
    enum seasons
    {
        summer,
        spring,
        fall,
        winter
    };
    seasons now = fall;
    switch (now)
    {
    case summer:
        break;
    case winter:
        cout << "Stay warm";
        break;
    case fall:
        cout << "its fall";
        break;
    case spring:
        break;
    }
}
// there are also class enums
// class enums are writen using class