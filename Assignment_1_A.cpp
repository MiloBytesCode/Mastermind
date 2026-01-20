#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

class code
{   
    public:
        code(int n, int m){ //constructor, sets n and m, which are private variables of the class code
            this->n = n;
            this->m = m;
        }

        void make_secret_code(){ //generates a random secret code of length m with digits from 0 to n
            srand(time(0)); //seed random number generator
            for(int i = 0; i < m-1; i++){
                private_code.push_back(rand() % (n+1));
            }
        }

        int checkCorrect(code guess){ //allows a user to compare guess code and secret code, user then enters number of correct digits. Method returns that number
            for (int x : private_code) {
            cout << x << " ";
            }
            cout << "please enter number of correct digits: ";
            int correct;
            cin >> correct;
            return correct;
        }

        int checkIncorrect(code guess){ //allows a user to compare guess code and secret code, user then enters number of correct digits in wrong place. Method returns that number
            cout << "please enter number of correct digits in wrong place: ";
            int correct;
            cin >> correct;
            return correct;
        }
    
        void set_guess_code(vector<int> guess){ //sets the private variable "private_code" to the user's guess code
            cout << "\nGuess code is:" << endl;
            for(int i = 0; i < guess.size(); i++){
                private_code.push_back(guess[i]);
                cout << guess[i] << " ";
            }
            cout << endl;
        }
    private:
        vector<int> private_code; //the code in the code class, either secret or guess depending on whether the code object is secret or guess.
        int n;
        int m;

};


int main()
{
    cout << "Welcome to Mastermind!" << endl; //welcome message
    int n = 5; //sets n and m values, in future versions will be user input
    int m = 6;
    code my_code(n,m); //creates code object for secret code
    my_code.make_secret_code();  //generates secret code

    code guess_code(n,m); //creates code object for guess code

    vector<int> guess_1= {5, 0, 3, 2, 6}; //hard code guesses
    guess_code.set_guess_code(guess_1); //sets guess code to hardcoded guess
    cout << "Correct digits: " << my_code.checkCorrect(guess_code) << endl; //calls checkcorrect method and prints output
    cout << "Incorrect digits: " << my_code.checkIncorrect(guess_code) << endl; //calls checkincorrect method and prints output

    vector<int> guess_2= {2, 1, 2, 2, 2};
    guess_code.set_guess_code(guess_2);
    cout << "Correct digits: " << my_code.checkCorrect(guess_code) << endl;
    cout << "Incorrect digits: " << my_code.checkIncorrect(guess_code) << endl;

    vector<int> guess_3= {1, 3, 3, 4, 5};
    guess_code.set_guess_code(guess_3);
    cout << "Correct digits: " << my_code.checkCorrect(guess_code) << endl;
    cout << "Incorrect digits: " << my_code.checkIncorrect(guess_code) << endl;


    return 0; //ends main function
}