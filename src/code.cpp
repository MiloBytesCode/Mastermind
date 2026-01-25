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
        stored_code.push_back(rand() % (n + 1));
    }
}


int Code::checkCorrect(Code guess) const
// Takes user guess and compares with secret_code, returns number of correct 
// digits in correct location
{ 
    int correct = 0;
    // guess.getCode(); compared with stored_code

    // algorithm implemention -> here
    
    return correct;
}


int Code::checkIncorrect(Code guess) const
// Takes user guess and compares with secret_code, returns number of correct
// digirts in incorrect location
{ 
    int semi_correct = 0;

    // algorithm implementation -> here

    return semi_correct;
}

string Code::printCode() const
// returns the secret code as a string for use in testing
{
    string c = "";
    for (int i : stored_code)
    {
        c += to_string(i);
    }
    return c;
}

void Code::setCode(vector<int> new_code)
// takes an int vector input and resets the stored_code data member
{
    stored_code = new_code;
}


vector<int> Code::getCode() const
// returns the code stored in the object
{
    return stored_code;
}














