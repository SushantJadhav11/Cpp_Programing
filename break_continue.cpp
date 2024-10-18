#include <iostream>
#include <string>
using namespace std;
/*
using break
int main()
{
    string sentence = "hello bro";
    for (int i = 0; i < sentence.size(); i++)
    {
        cout << sentence[i] << endl;
        if (sentence[i] == 'o')
        {
            cout << "found o" << endl;
            break;
        }
    }
    cout << "done";
}
*/
// using continue -stops the current iteration and go to the next iteration.

int main()
{
    string sentence = "hello bro?";
    for (int i = 0; i < sentence.size(); i++)
    {
        if (sentence[i] == 'o')
        {
            continue;
        }
        cout << sentence[i] << endl;
    }
}
