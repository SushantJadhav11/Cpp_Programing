#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "what is your age\n";
    cin >> age;

    if (age < 13)
    {
        cout << "You're not old enough\n";
        return -1; // it will not run always statement
    }
    cout << "always";
    return 0;
}