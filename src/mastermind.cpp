// Project 1b ---------- 11-zogwidrouhua


#include "mastermind.h"
#include <iostream>
#include <vector>
using namespace std;


Mastermind::Mastermind() : secret(5, 10){
    n=5;
    m=10;
}
Mastermind::Mastermind(int n, int m) : secret(n, m){
    this->n = n;
    this->m = m;
}

void Mastermind::printSecretCode() const{
    cout << "Secret Code: " << secret.printCode() << endl;
}

// function that reads a guess from the keyboard and returns it as a Code object(representing the guess)
Code Mastermind::humanGuess() const{
    vector<int> guess_vec;
    int digit;

    cout << "Enter " << n << " digits separated by spaces in between them(0 to " << m-1 << "): ";

    for (int i = 0; i < n; i++){
        cin >> digit;
        guess_vec.push_back(digit);
    }

    Code guess(n, m);
    guess.setCode(guess_vec);
    return guess;
}   

//function that is pass one code oject(the guess) and returns a Response object 
Response Mastermind::getResponse(const Code& guess) const{
    int reCorrect = secret.checkCorrect(guess);
    int reIncorrect = secret.checkIncorrect(guess);
    return Response (reCorrect, reIncorrect);
    
}

// function that is passed a Response object and returns true if the board is solved 
bool Mastermind::isSolved(const Response& response) const{
    return response.getCorrect() == n;
}

// function that plays a game of mastermind :initializes a random secrete code, prints it to the screen,
// and then iteratively gets a guess from the player and prints the response until either the
// codemaker or the codebreaker has won.
void Mastermind::playGame(){
    secret.createSecretCode();
    cout << "This is game Mastermind!" << endl;
    printSecretCode();

    bool game_solved = false;
    int current_attempt = 0;
   
    // limit to 10 attempts, or the codemaker wins
    while (!game_solved && current_attempt < 10){
        Code guess = humanGuess();
        Response response = getResponse(guess);
        cout << "Response: " << response << endl;
        current_attempt++;
        game_solved = isSolved(response);
    }

    if (game_solved){
        cout << "Congratulations! You solved the number in " << current_attempt << " guesses!" << endl;
    } else {
        cout << "The codemaker wins. You did not solve the puzzle with 10 chances." << endl;
    }
}