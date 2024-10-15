#include <iostream>
#include <algorithm>
#include <string>
#include <stdlib.h>
#include <cctype>

using namespace std;

void prompt (int min, string prompt, string valid, string invalid, string error)
{
    int minimum = min;
    string input;
    bool isValid = false;
    int temp = 8675309;
    while (isValid == false)
    {
        cout << prompt;
        getline(cin, input);
        transform(input.begin(), input.end(), input.begin(), ::toupper);
        cout << input << endl;

        if (input == "EXIT")
        {
            cout << "Goodbye.\n";
            break;
        } else if (input == "DEFAULT") {
            temp = 55;
            cout << "Your age is " << temp << ".\n";
        }
        else if (std::any_of(input.begin(), input.end(), ::isdigit) == true)
        {
            temp = std::stoi(input);
            if (temp <= 0)
            {
                cout << "ERROR: Impossible age.\n";
            }
            else {
                cout << "Your age is " << temp << ".\n";
                if (temp >= minimum)
                {
                    cout << valid;
                    isValid = true;
                } else {
                    cout << invalid;
                }
            }
        }
        else {
            cout << "ERROR: Not an actual number.\n";
        }
    }
}

