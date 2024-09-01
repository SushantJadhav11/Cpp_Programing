#include <iostream>
#include <string>
using namespace std;
int main()
{
    string greeting = "hello";
    cout << greeting.size();
    greeting += " there";
    greeting.append("!");
    cout << greeting;
    greeting.insert(3, "  ");
    greeting.erase(3); // removes everything from 3rd lelement
    cout << greeting;
    greeting.erase(greeting.length() - 1);
    greeting.pop_back(); // removes the last element.
    greeting.replace(0, 4, "heven");
    cout << greeting;
}