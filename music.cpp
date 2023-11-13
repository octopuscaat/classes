#include <iostream>
#include "music.h"
using namespace std;



music::music() {
   
    
    
    cout << "input title: ";
    cin >> title;
    cout << "input year: ";
    cin >> year;
    cout << "input publisher: ";
    cin >> publisher;
    cout << "input rating: ";
    cin >> artist;
    cout << "input duration: ";
    cin >> duration;
    cout << "\n" << title << " has been added";
    //videoGame(title,year, publisher, rating);
}
