#include <iostream>
#include <cstring>

using namespace std;



class movie {
    public:
    
    string title;
    int year;
    string director;
    int duration;
    string rating;
    movie();
    movie(string title, int year, string director, int duration, int rating) {
        this->title = title;
        this->year = year;
        this->director = director;
        this->rating = rating;
        this->duration = duration;
    };
};
