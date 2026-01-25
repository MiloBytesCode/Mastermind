/* Header */


/* --- DEPENDENCIES --- */
#include "code.h"
#include <iostream>
using namespace std;

int main()
{
    // test guesses
    vector<int> guess_1 = {5, 0, 3, 2, 6}; 
    vector<int> guess_2 = {2, 1, 2, 2, 2}; 
    vector<int> guess_3 = {1, 3, 3, 4, 5}; 

    // number of digits (n) and length (m) test case
    int n = 10, m = 5;  

    // init code object
    Code master_code(n, m);
    master_code.createSecretCode();

    int correct, incorrect;

    // begin
    cout << "=====  Welcome to Mastermind!  ======" << endl;
    cout << "-> Secret Code = " << master_code.secretCode() << endl;

    // try guess 1
    master_code.user_guess = guess_1;
    correct = master_code.checkCorrect();
    incorrect = master_code.checkIncorrect();

    cout << "Guess 1 [5,0,3,2,6] returns : ";
    cout << "correct = " << correct << " | incorrect = " << incorrect << endl;

    // try guess 2
    master_code.user_guess = guess_2;
    correct = master_code.checkCorrect();
    incorrect = master_code.checkIncorrect();

    cout << "Guess 1 [2,1,2,2,2] returns : ";
    cout << "correct = " << correct << " | incorrect = " << incorrect << endl;

    // try guess 3
    master_code.user_guess = guess_3;
    correct = master_code.checkCorrect();
    incorrect = master_code.checkIncorrect();

    cout << "Guess 1 [1,3,3,4,5] returns : ";
    cout << "correct = " << correct << " | incorrect = " << incorrect << endl;


    return 0; //ends main function
}