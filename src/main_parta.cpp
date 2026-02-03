/* ========================================================================= */
// Project 1a ---------- 11-zogwidrouhua
//
// Program runtime for Project 1a. Contains the Project 1a required guess
// inputs in order. Sets the guess input and calcualtes correct and 
// incorrect values based on randomized secret code, then prints to the 
// console.
/* ========================================================================= */

/*
#include "code.h"
#include <iostream>
using namespace std;


int main()
{
    // test guesses
    vector<int> guess_1 = {5, 0, 3, 2, 6}; 
    vector<int> guess_2 = {2, 1, 2, 2, 2}; 
    vector<int> guess_3 = {1, 3, 3, 4, 5}; 
    

    int n = 5, m = 10;              // n length, m digits
    
    Code code_maker(n, m);          // init MAKER
    code_maker.createSecretCode();

    //this code is for forcing a value to test, if needed
    //vector<int> test_code = {1, 1, 2, 3, 2};
    //code_maker.setCode(test_code);

    Code code_breaker(n, m);        // init BREAKER

    // Begin testing
    cout << "=====  Welcome to Mastermind!  ======" << endl;
    cout << "-> Secret Code = " << code_maker.printCode() << endl;

    code_breaker.setCode(guess_1);              // try GUESS 1

    cout << "Guess 1 [5,0,3,2,6] returns : ";
    cout << "correct = " << code_maker.checkCorrect(code_breaker) << " ";
    cout << "| incorrect = " << code_maker.checkIncorrect(code_breaker) << endl;

    code_breaker.setCode(guess_2);              // try GUESS 2

    cout << "Guess 2 [2,1,2,2,2] returns : ";
    cout << "correct = " << code_maker.checkCorrect(code_breaker) << " ";
    cout << "| incorrect = " << code_maker.checkIncorrect(code_breaker) << endl;

    code_breaker.setCode(guess_3);              // try GUESS 3

    cout << "Guess 3 [1,3,3,4,5] returns : ";
    cout << "correct = " << code_maker.checkCorrect(code_breaker) << " ";
    cout << "| incorrect = " << code_maker.checkIncorrect(code_breaker) << endl;
    // end of testing

    return 0;
}

*/