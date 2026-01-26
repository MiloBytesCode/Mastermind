/* ========================================================================= */
// Project 1a ---------- 11-zogwidrouhua
//
// Header file for Code class in Project 1a. Contains class declaration and 
// function prototypes in addition to the private data members required for 
// the class functionality.
/* ========================================================================= */

#pragma once

#include <vector>
#include <string>

class Code
{   
    public:
        // constructor :

        Code(int n, int m);

        // class functionality :

        void createSecretCode();
        int checkCorrect(const Code& guess) const;
        int checkIncorrect(const Code& guess) const;

        // access to data members :

        void setCode(std::vector<int> new_code);
        std::vector<int> getCode() const;
        std::string printCode() const;

    private:
        int n;      // length of code
        int m;      // digits of code
        std::vector<int> stored_code;

}; // end Code class

// End of header file














