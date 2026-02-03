/* ========================================================================= */
// Project 1b ---------- 11-zogwidrouhua
//
// Program runtime for Project 1b. Contains the main function that 
// allows users to input length and digit range to play. It then starts
// the Mastermind game where players tries to guess a 
// randomized secret code. Players receives feedback on correct and incorrect 
// digit placements until the code is solved(win game), or no attempts are allowed anymore(lose game).
/* ========================================================================= */

#include "mastermind.h"
#include <iostream>
using namespace std;


int main() {

    int n, m;

    cout << "Enter code length : ";
    cin >> n;

    while(cin.fail() || n < 1)
    {
        cout << "Invalid input. Please enter an integer for code length: ";
        cin.clear();
        cin.ignore(10000, '\n');
        cin >> n;
    }

    Mastermind game(n, m);
    game.playGame();
    return 0;
}