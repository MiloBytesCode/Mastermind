/* Header */



#include "code.h"
#include <iostream>
using namespace std;

// PART A
int main()
{
    // test guesses
    vector<int> guess_1 = {5, 0, 3, 2, 6}; 
    vector<int> guess_2 = {2, 1, 2, 2, 2}; 
    vector<int> guess_3 = {1, 3, 3, 4, 5}; 

    // n length, m digits
    int n = 5, m = 10;  
    
    // init maker
    Code code_maker(n, m);
    code_maker.createSecretCode();

    // init breaker
    Code code_breaker(n, m);


    // begin
    cout << "=====  Welcome to Mastermind!  ======" << endl;
    cout << "-> Secret Code = " << code_maker.printCode() << endl;

    // try guess 1
    code_breaker.setCode(guess_1);

    cout << "Guess 1 [5,0,3,2,6] returns : ";
    cout << "correct = " << code_maker.checkCorrect(code_breaker);;
    cout << " | incorrect = " << code_maker.checkIncorrect(code_breaker) << endl;

    // try guess 2
    code_breaker.setCode(guess_2);

    cout << "Guess 2 [2,1,2,2,2] returns : ";
    cout << "correct = " << code_maker.checkCorrect(code_breaker);;
    cout << " | incorrect = " << code_maker.checkIncorrect(code_breaker) << endl;

    // try guess 3
    code_breaker.setCode(guess_3);

    cout << "Guess 3 [1,3,3,4,5] returns : ";
    cout << "correct = " << code_maker.checkCorrect(code_breaker);;
    cout << " | incorrect = " << code_maker.checkIncorrect(code_breaker) << endl;


    return 0;
}






/////// MAIN FOR PART B
/*
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

*/