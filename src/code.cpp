/* Header */


#include "code.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
using namespace std;


Code::Code(int n, int m)
// Constructor : inits data members
{
    this->n = n;
    this->m = m;
}

void Code::createSecretCode()
// Generates a randomized secret code of length m with digits from 0 to n
{
    //set seed for random number generator
    srand(time(0)); 

    for(int i = 0; i < m; i++)
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

string Code::secretCode() const
// returns the secret code as a string for use in testing
{
    string c = "";
    for (int i : secret_code)
    {
        c += to_string(i);
    }
    return c;
}

















