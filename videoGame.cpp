#include <iostream>
#include "videoGame.h"

using namespace std;


videoGame::videoGame() {
   
    
    
    cout << "input title: ";
    cin >> title;
    cout << "input year: ";
    cin >> year;
    cout << "input publisher: ";
    cin >> publisher;
    cout << "input rating: ";
    cin >> rating;
    
    cout << "\n" << title << " has been added";
    //videoGame(title,year, publisher, rating);
}
