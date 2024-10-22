#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void play_game()
{
    int random = rand() % 251;
    // cout << random << endl;
    cout << "guess a number";
    while (true)
    {
        int guess;
        cin >> guess;
        if (guess == random)
        {
            cout << "You Win" << endl;
            break;
        }
        else if (guess < random)
        {
            cout << "too low,guess again";
        }
        else
        {
            cout << "too high,guess again";
        }
    }
}

int main()
{

    srand(time(NULL));
    int choice;

    do // menu
    {
        cout << "0. Quit  \n1. Play Game\n";
        cin >> choice;
        switch (choice)
        {
        case 0:
            cout << "have a great day";
            break;
        case 1:
            play_game();
            break;
        }
    } while (choice != 0);
}