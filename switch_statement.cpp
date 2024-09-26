// switch only works for int

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int age = 0;
    cout << "what is your age?\n";
    cin >> age;

    switch (age)
    {
    case 13:
        cout << "Your age is 13";
        break;
    case 14:
        cout << "your age is 14!";
        break;
    default:
        cout << "not the required age.\n";
        break;
    }
    return 0;
}