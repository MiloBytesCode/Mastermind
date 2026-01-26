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