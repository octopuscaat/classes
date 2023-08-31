
#include <iostream>

using namespace std;

int guessNum(int randNum, int guesses);

int main() {

  
  srand(time(NULL));

  int randomNum = rand()%100;
  guessNum(randomNum, 0);
}


int guessNum(int randNum, int guesses) {



  string replay;
  int input;
  cout << '\n' << "input number:";
  cin >> input;

  if(input < randNum) {
    cout << '\n' << "too low!";
  }
  if(input > randNum) {
    cout << '\n' << "too high!";
      }
  if(input != randNum) {
    cout << '\n' << "your number:" << input;
    guesses += 1;
    //cout << "debug:" << randNum;
    guessNum(randNum, guesses);
  }
  if(input == randNum) {
    cout << '\n' << "correct! The number  " << randNum << " was guessed in " << guesses << " guesses!";
    cout << '\n' << "replay? (y/n)" << '\n';
    cin >> replay;
    if(replay == "y") {
      main();
    } else if(replay == "n") {
      cout << '\n' << "program ended successfully";
      return 1;
    } else {
      cout << '\n' << "not a valid option";
    }
  }
  
  return 0;
  }


