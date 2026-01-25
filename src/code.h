/*
Proiject #1 Mastermind, part a

:: need desc :: 

*/


#ifndef CODE_H
#define CODE_H

#include <vector>
#include <string>


class Code
{   
    public:
        // constructor :

        Code(int n, int m);

        // class operations :

        void createSecretCode();
        int checkCorrect() const;
        int checkIncorrect() const;
        std::string secretCode() const;

        // public data members
        std::vector<int> user_guess;

    private:
        int n;
        int m;
        std::vector<int> secret_code;

};


#endif


















