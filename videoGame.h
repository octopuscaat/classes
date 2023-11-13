#include <iostream>
#include <cstring>
//#include "main.cpp"
using namespace std;



class videoGame {
    public:
    string title;
    int year;
    string publisher;
    int rating;
    
    int id;
    videoGame();
    videoGame(string title, int year, string publisher, int rating) {
        this->title = title;
        this->year = year;
        this->publisher = publisher;
        this->rating = rating;
    };
    
};
