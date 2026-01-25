/* Header */


#include "code.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
using namespace std;


Code::Code(int n, int m)
// Constructor : inits all data members and runs createSecretCode to init the
// secret code
{
    this->n = n;
    this->m = m;
    createSecretCode();
}

void Code::createSecretCode()
// Generates a randomized secret code of length m with digits from 0 to n
{
    //set seed for random number generator
    srand(time(0)); 

    for(int i = 0; i < m - 1; i++)
    {
        secret_code.push_back(rand() % (n + 1));
    }
}


int Code::checkCorrect() const
// Takes user guess and compares with secret_code, returns number of correct 
// digits in correct location
{ 
    int correct = 0;

    // algorithm implemention -> here
    
    return correct;
}


int Code::checkIncorrect() const
// Takes user guess and compares with secret_code, returns number of correct
// digirts in incorrect location
{ 
    int semi_correct = 0;

    // algorithm implementation -> here

    return semi_correct;
}

void Code::secretCode() const
// returns the secret code as a string for use in testing
{
    
    for (int i : secret_code)
    {
        cout << i;
    }
    cout << endl;
}

















