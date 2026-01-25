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
        int checkCorrect(Code guess) const;
        int checkIncorrect(Code guess) const;
        std::string printCode() const;
        void setCode(std::vector<int> new_code);
        std::vector<int> getCode() const;

    private:
        int n;
        int m;
        std::vector<int> stored_code;

};














