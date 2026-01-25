/* Header */


#include "code.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
using namespace std;

#include <ctime> 

Code::Code(int n, int m)
// Constructor : inits data members
{
    this->n = n;
    this->m = m;
}

void Code::createSecretCode()
// Generates a randomized secret code of length m with digits from 0 to n
{
    stored_code.clear(); //clear vector to prevent growth on multiple calls

    //set seed for random number generator
    srand(time(0)); 

    for(int i = 0; i < n; i++)
    {
        stored_code.push_back(rand() % (n + 1));
        //stored_code.push_back(rand() % m); 
    }
}


int Code::checkCorrect(const Code& guess) const
// Takes user guess and compares with secret_code, returns number of correct 
// digits in correct location
{ 
    int correct = 0;
    vector<int> guess_code = guess.getCode();

    for (int i = 0; i < n; i++)
    {

        if (guess_code[i] == stored_code[i]) 
        {
            correct++;
        }
    }
    
    return correct;
}


int Code::checkIncorrect(const Code& guess) const
// Takes user guess and compares with secret_code, returns number of correct
// digirts in incorrect location
{ 
    int semi_correct = 0;
    vector<int> guess_code = guess.getCode();
    vector<int> secret_code = stored_code;
    
    vector<bool> track_usedSecret(n, false); //track used digits in secret code
    vector<bool> track_usedGuess(n, false); //track used digits in guess code

    // first check all correct position matches
    for(int i = 0; i < n; i++)
    {
        if(stored_code[i] == guess_code[i])
        {
            track_usedSecret[i] = true;
            track_usedGuess[i] = true;
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        if(track_usedGuess[i]) continue; // go on if already matched guess

        for(int j = 0; j < n; j++)
        {
            if(track_usedSecret[j]) continue; //go onto next secret digit if already matched

            // check for semi-correct match
            if(guess_code[i] == stored_code[j])
            {
                semi_correct++;
                track_usedSecret[j] = true;
                track_usedGuess[i] = true;
                break;
                
            }
        }
    }

   /* for (int i = 0; i < n; i++)
    {

        if (guess_code[i] == secret_code[i])
        {
            break;

        } else
        {
            for (int j = 0; j < n; j++)
            {
                if(guess_code[i] == secret_code[j] && (i != j))
                {
                    // special case
                    if (guess_code[j] == secret_code[j]) { break; }

                    guess_code[i] = -1;
                    semi_correct++;
                }
            }

        }

    }
        */

    return semi_correct;
}


/*
41122 -> secret

52326 -> 1 0





*/

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














