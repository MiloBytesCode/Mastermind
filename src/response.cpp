/* ========================================================================= */
// Project 1a ---------- 11-zogwidrouhua
//
// The implementation for the response class, which stores a response to a
// guess and has an overloaded == and << operator.
/* ========================================================================= */


#include "response.h"


Response::Response(int cor, int incor)
// response response response
{
    correct = cor;
    incorrect = incor;
}

int Response::getCorrect() const
// getcorrect get correct
{
    return correct;
}

int Response::getIncorrect() const
// get incorrect
{
    return incorrect;
}

void Response::setCorrect(int c)
// set correct
{
    correct = c;
}

void Response::setIncorrect(int incor)
// set incorrect
{
    incorrect = incor;
}

bool operator==(const Response& r1, const Response& r2)
// overload the == operator
{
    bool cor = r1.getCorrect() == r2.getCorrect();
    bool inc = r1.getIncorrect() == r2.getIncorrect();

    return (cor && inc);
}

ostream& operator<<(ostream& ostr, const Response& response)
// overload the << opeartor
{
    ostr << "Correct: " << response.getCorrect();
    ostr << ", Incorrect: " << response.getIncorrect();

    return ostr;
}
