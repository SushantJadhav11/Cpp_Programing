// we learned using find

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string greeting = "what is up?";

    //   greeting.replace(greeting.find("hell"), 4, "****");
    cout << greeting.substr(5, 2) << endl;
}