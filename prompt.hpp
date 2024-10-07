#include <iostream>

using namespace std;

void prompt (int min, string prompt, string valid, string invalid)
{
    bool isValid = false;
    int temp;
    while (isValid == false)
    {
        cout << prompt;
        cin >> temp;
        if (temp >= min)
        {
            cout << valid << endl;
            isValid = true;
        } else {
            cout << invalid << endl;
        }
    }
}

