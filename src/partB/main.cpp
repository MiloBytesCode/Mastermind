#include "mastermind.h"
#include <iostream>

using namespace std;

int main() {
    int n, m;

    cout << "Enter code length you want to guess: ";
    cin >> n;
 

    cout << "Enter how many should the digit range be(digits are 0 to m-1): ";
    cin >> m;
 

    Mastermind game(n, m);
    game.playGame();
    return 0;
}
