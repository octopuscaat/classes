#include <iostream>
#include "movie.h"
using namespace std;



movie::movie() {
   
    

    cout << "input title: ";
    cin >> title;
    cout << "input director: ";
    cin >> director;
    cout << "input year: ";
    cin >> year;
    cout << "input duration: ";
    cin >> duration;
    cout << "input rating: ";
    cin >> rating;
    cout << "\n" << title << " has been added";
    //videoGame(title,year, publisher, rating);
}
