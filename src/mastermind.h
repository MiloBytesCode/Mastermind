/* ========================================================================= */
// Project 1b ---------- 11-zogwidrouhua
//
// The header file for the mastermind implementation. Containes the class
// declaration and the data members and functions prototypes that will be used to 
// play the mastermind game.
/* ========================================================================= */

#pragma once

#include "code.h"
#include "response.h"


class Mastermind
{
    public:
        Mastermind();
        Mastermind(int n, int m);

        void printSecretCode() const;
        Code humanGuess() const;
        Response getResponse(const Code& guess) const;
        bool isSolved(const Response& r) const;
        void playGame();

    private:
        Code secret;
        int n;  // length of code
        int m;  // digits of code
};