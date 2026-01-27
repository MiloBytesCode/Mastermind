/* ========================================================================= */
// Project 1a ---------- 11-zogwidrouhua
//
//
/* ========================================================================= */


#include "response.h"


Response::Response(int c, int ic)
// response response response
{
    correct = c;
    incorrect = ic;
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


void Response::setIncorrect(int ic)
// set incorrect
{
    incorrect = ic;
}

bool operator==(const Response& r1, const Response& r2)
// == == = == == === 
{
    return (r1.getCorrect() == r2.getCorrect() && r1.getIncorrect() == r2.getIncorrect());
}

ostream& operator<<(ostream& ostr, const Response& response)
// << << << << <
{
    ostr << "Correct: " << response.getCorrect() << ", Incorrect: " << response.getIncorrect();
    return ostr;
}
