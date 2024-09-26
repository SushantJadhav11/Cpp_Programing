#include <iostream>
#include <string>
using namespace std;
int main()
{
    string answer = "caleb";
    int age_ans = 60;
    string guess;
    cout << "what is my name?\n";
    cin >> guess;
    int age_guess;
    cout << "guess my age?\n";
    cin >> age_guess;

    if (guess == answer && age_guess == age_ans)
    {
        cout << "you got it right!\n";
    }
    else if (!(guess == answer)) // anything but this.! is not same as =!
    {
        cout << "you got name right age wrong";
    }
    else if (age_guess == age_ans)
    {
        cout << "you got age right name wrong";
    }
    else
    {
        cout << "sorry you got both wrong\n";
    }
}
/*
logical
&& (and),|| (or)

comparison
== (compare),!= (not equal to),< >(less then greater then)
greater then equal to ,less then equal to.
*/