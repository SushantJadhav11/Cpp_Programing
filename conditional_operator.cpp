#include <string>
#include <iostream>
using namespace std;
int main()
{
    int answer = 11;
    cout << "guess the number:" << endl;
    int guess;
    cin >> guess;
    int points = guess == answer ? 10 : 0;
    guess == answer ? cout << "good job! " : cout << "bad job!";

    cout << "You have " << points << " points." << endl;
}