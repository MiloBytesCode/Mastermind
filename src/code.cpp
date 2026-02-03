/* ========================================================================= */
// Project 1b ---------- 11-zogwidrouhua
//
//
// Main program file for Project 1b. Contains Code class implementation for 
// constructor, secret code creation, checkCorrect, checkIncorrect, and 
// utility functions for accessing the stored code data member and 
// printing.
/* ========================================================================= */

#include "code.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
using namespace std;


Code::Code(int n, int m)
// Constructor, inits data members
{
    this->n = n;
    this->m = m;
} // end Code constructor


void Code::createSecretCode()
// Generates a randomized secret code of length m with digits from 0 to n
{
    // empty vector before generating code
    stored_code.clear();

    //set seed for random number generator
    srand(time(0)); 

    for (int i = 0; i < n; i++)
    {
        stored_code.push_back(rand() % m);
    }
} // end createSecretCode




int Code::checkCorrect(const Code& guess) const
// Takes user guess and compares with secret_code, returns number of correct 
// digits in correct location
{ 
    int correct = 0;
    vector<int> guess_code = guess.getCode();

    for (int i = 0; i < n; i++)
    {
        // the same value at the same index is considered correct
        if (guess_code[i] == stored_code[i]) 
        {
            correct++;
        }
    }
    
    return correct;
} // end checkCorrect


int Code::checkIncorrect(const Code& guess) const
// Takes user guess and compares with secret_code, returns number of correct
// digits at incorrect location (semi_correct), no double counting
{ 
    int semi_correct = 0;
    vector<int> guess_code = guess.getCode();
    vector<int> secret_code = stored_code;

    for (int i = 0; i < n; i++)   // iterate through GUESS
    {
        if (guess_code[i] == secret_code[i]) { continue; }

        for (int j = 0; j < n; j++)     // iterate through SECRET
        {
            // if a match exists at this location
            if (guess_code[j] == secret_code[j]) { continue; }

            // if semi_correct case is true
            if (guess_code[i] == secret_code[j] && (i != j))     
            {
                // remove THIS SECRET value from search, don't use again
                secret_code[j] = -1;
                semi_correct++;

                // stop checking THIS GUESS value, already matched
                break;  
            }

        } // end of SECRET iteration

    } // end of GUESS iteration

    return semi_correct;
} // end checkIncorrect


string Code::printCode() const
// utility function that returns the stored code as a string
{
    string c = "";

    for (int i : stored_code)
    {
        // ammend string with each number in stored code
        c += to_string(i);
    }

    return c;
} // end printCode


void Code::setCode(vector<int> new_code)
// takes an int vector input and resets the stored_code data member
{
    stored_code = new_code;
} // end setCode


vector<int> Code::getCode() const
// returns stored code data member
{
    return stored_code;
} // end getCode














