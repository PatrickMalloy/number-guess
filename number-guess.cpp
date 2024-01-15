#include <iostream>
#include <ctime>
#include <random>

using std::cout;
using std::cin;
using std::endl;

int enterGuess();

int main() {

  srand(time(NULL)); // init random number generator

  int randomNumber, playerGuess;

  cout << "==============================" << endl;
  randomNumber = random() % 10 + 1;
  playerGuess = enterGuess();

  cout << "Random Number: " << randomNumber << endl;
  if(randomNumber == playerGuess) {
    cout << "You Win!!" << endl;
  }
  else {
    cout << "You Lose." << endl;
  }

  return 0;
}

int enterGuess() {
  int guess=0;

  while(guess<1 || guess>10){
    cout << "What is your guess (1-10): ";
    cin >> guess;
  }

  return guess;
}
