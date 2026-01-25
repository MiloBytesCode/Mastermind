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
    int n = 5, m = 10;  
    /*
    cout << "please enter max number possible and number of digits" << endl;
    cout << "Max number: ";
    cin >> n;
    n += 1;
    cout << "\nnumber of digits: ";
    cin >> m;
    //code for taking in codemaker params, commented out because the original guess codes need specific values of n and m
        */
    
    // init maker
    Code code_maker(n, m);
    code_maker.createSecretCode();

    // init breaker
    Code code_breaker(n, m);


    int correct, incorrect;

    // begin
    cout << "=====  Welcome to Mastermind!  ======" << endl;
    cout << "-> Secret Code = " << code_maker.printCode() << endl;

    // try guess 1
    code_breaker.setCode(guess_1);
    correct = code_maker.checkCorrect(code_breaker);
    incorrect = code_maker.checkIncorrect(code_breaker);

    cout << "Guess 1 [5,0,3,2,6] returns : ";
    cout << "correct = " << correct << " | incorrect = " << incorrect << endl;

    // try guess 2
    code_breaker.setCode(guess_2);
    correct = code_maker.checkCorrect(code_breaker);
    incorrect = code_maker.checkIncorrect(code_breaker);

    cout << "Guess 1 [2,1,2,2,2] returns : ";
    cout << "correct = " << correct << " | incorrect = " << incorrect << endl;

    // try guess 3
    code_breaker.setCode(guess_3);
    correct = code_maker.checkCorrect(code_breaker);
    incorrect = code_maker.checkIncorrect(code_breaker);

    cout << "Guess 1 [1,3,3,4,5] returns : ";
    cout << "correct = " << correct << " | incorrect = " << incorrect << endl;



    return 0; //ends main function


}
