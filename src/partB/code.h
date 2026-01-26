/*
Proiject #1 Mastermind, part a

:: need desc :: 

*/

#pragma once

#include <vector>
#include <string>

class Code
{   
    public:
        // constructor :

        Code(int n, int m);

        // class operations :

        void createSecretCode();
        int checkCorrect(const Code& guess) const;
        int checkIncorrect(const Code& guess) const;
        std::string printCode() const;

        // accessing data members :

        void setCode(std::vector<int> new_code);
        std::vector<int> getCode() const;

    private:
        int n;  // length of code
        int m;  // digits of code
        std::vector<int> stored_code;

};














