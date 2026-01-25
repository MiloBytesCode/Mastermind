#include "response.h"

bool operator==(const Response& r1, const Response& r2)
{
    return (r1.toString() == r2.toString());
}

ostream& operator<<(ostream& os, const Response& response)
{
    os << response.toString();
    return os;
}
