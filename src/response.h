#include <iostream>
using namespace std;

class Response
{
    public:
        
        Response(int c=0, int ic=0);

        void setCorrect(int c);
        void setIncorrect(int ic);
        int getCorrect() const;
        int getIncorrect() const;
 
    private:
        int correct; 
        int incorrect;
};

//an overloaded operator == that compares responses and returns true if they are equal
bool operator==(const Response& r1, const Response& r2);
//an overloaded operator << that outputs the response
ostream& operator<<(ostream& os, const Response& response);