// Project 1b ---------- 11-zogwidrouhua


#include "response.h"


Response::Response(int c, int ic)
{
    correct = c;
    incorrect = ic;
}

int Response::getCorrect() const
{
    return correct;
}
int Response::getIncorrect() const
{
    return incorrect;
}
void Response::setCorrect(int c)
{
    correct = c;
}
void Response::setIncorrect(int ic)
{
    incorrect = ic;
}

bool operator==(const Response& r1, const Response& r2)
{
    return (r1.getCorrect() == r2.getCorrect() && r1.getIncorrect() == r2.getIncorrect());
}

ostream& operator<<(ostream& os, const Response& response)
{
    os << "Correct: " << response.getCorrect() << ", Incorrect: " << response.getIncorrect();
    return os;
}
