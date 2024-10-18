#include <iostream>
#include <string>
using namespace std;
int main()
{
    string guess;
    string password = "frieren";
    do
    {
        cout << "guess the password";
        cin >> guess;
    } while (guess != password);
}