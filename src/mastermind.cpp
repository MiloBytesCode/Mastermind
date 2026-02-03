/* ========================================================================= */
// Project 1b ---------- 11-zogwidrouhua
//
// The implementation for the mastermind class. Contains the function
// implementations that are responsible for playing a full game of Mastermind
// against the computer(secret code generation, input handling, response operation, and game flow operation).
/* ========================================================================= */

#include "mastermind.h"
#include <iostream>
#include <vector>
#include <limits>
using namespace std;


Mastermind::Mastermind() : secret(5, 10)
// Mastermind class constructor with default values
{
    this->n = 5;
    this->m = 10;
}

Mastermind::Mastermind(int n, int m) : secret(n, m)
// Mastermind class constructor with input values
{
    this->n = n;
    this->m = m;
}

void Mastermind::printSecretCode() const
// print the secret code
{
    cout << "Secret Code: " << secret.printCode() << endl;
}

Code Mastermind::humanGuess() const // ~~~~~ NEEDS INPUT VALIDATION ~~~~~
// function that reads a guess from the keyboard and returns it as a Code 
// object representing the guess
{
    vector<int> guess_vec;
    int digit, i = 0, sacrifice;

    while (i != n)
    {
        while (true) {
            if (!(cin >> digit)) {
                cout << "Enter digits only" << endl;

                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            if (digit >= m || digit < 0) {
                cout << "Enter numbers in range only" << endl;

                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
        break;
    }
    }

    Code guess(n, m);
    guess.setCode(guess_vec);

    return guess;
}   

Response Mastermind::getResponse(const Code& guess) const
{
    int reCorrect = secret.checkCorrect(guess);
    int reIncorrect = secret.checkIncorrect(guess);

    return Response (reCorrect, reIncorrect);
}

bool Mastermind::isSolved(const Response& response) const
// function that is passed a Response object and returns true if the board is 
// solved 
{
    return response.getCorrect() == n;
}

void Mastermind::playGame() // ~~~~~ NEEDS TO PRINT RESPONSE ~~~~~
// function that plays a game of mastermind :initializes a random secrete code,
// prints it to the screen, and then iteratively gets a guess from the player 
// and prints the response until either the codemaker or the codebreaker has 
// won.
{
    // generate secret code and print welcome message
    secret.createSecretCode();
    cout << "~~~~~ Welcome to Mastermind! ~~~~~" << endl;
    cout << "Secret Code -> ";
    printSecretCode();

    // declare game loop variables
    bool game_solved = false;
    int current_attempt = 0;
   
    // limit to 10 attempts, or the codemaker wins
    while (!game_solved && current_attempt < 10)
    {
        Code guess = humanGuess();
        Response response = getResponse(guess);

        cout << response << "Current Attempt: " << current_attempt << "\n";

        game_solved = isSolved(response);
        current_attempt++; // increment attempt count
    }
    
    // print end game message according to win condition
    if (game_solved)
    {
        cout << "Congratulations! You solved the number in ";
        cout << current_attempt << " guesses!" << endl;

    } else 
    {
        cout << "The codemaker wins. You did not ";
        cout << "solve the puzzle with 10 chances." << endl;
    }
}