 #include <iostream>
 using namespace std;

 class Response
 {
     public:
         
         Response(int correct, int incorrect);

         
         string toString() const;

     private:
         int correct; 
         int incorrect;
 };

bool operator==(const Response& r1, const Response& r2);
ostream& operator<<(ostream& os, const Response& response);