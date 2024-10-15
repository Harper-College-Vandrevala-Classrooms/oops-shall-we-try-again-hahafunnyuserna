#include <iostream>
#include "prompt.hpp"

using namespace std;

int main(void)
{
    string quest = "Please enter your age:\n";
    string pass = "You're able to run for president!\n";
    string fail = "You're too young for the oval office.\n";
    string error = "";
    int minimum = 35;

    prompt (minimum, quest, pass, fail, error);
}