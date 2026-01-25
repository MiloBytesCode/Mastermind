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

    cout << "=====  Welcome to Mastermind!  ======" << endl;
    cout << "Project Part A required output : " << endl;
    cout << "-> Secret Code = ";
    master_code.secretCode();

    master_code.user_guess = guess_1;
    



    return 0; //ends main function
}