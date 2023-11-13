#include <iostream>
#include "videoGame.h"
#include "music.h"
#include "movie.h"
#include <cstring>
#include <vector>
using namespace std;



//int inputs(vector vec);

int database(vector<videoGame*> &videoGames, vector<movie*> &movies, vector<music*> &music);
int addVideoGame(vector<videoGame*> &videoGames);
int addMusic(vector<music*> &music);
int addMovie(vector<movie*> &movies);
int search(vector<videoGame*> &videoGames, vector<movie*> &movies, vector<music*> &music, string query, int yer);
int remove(vector<videoGame*> &videoGames, vector<movie*> &movies, vector<music*> &music, string query);

int main() {
    vector <videoGame*> videoGames;
    vector <movie*> movies;
    vector <music*> music;
    videoGames.push_back(new videoGame("Doom",1989,"company",5));
    videoGames.push_back(new videoGame("Doom",2016,"company",5));
    videoGames.push_back(new videoGame("Super_Mario_Bros.",1985,"nintendo",5));
  //int vec = 0;
database(videoGames, movies, music);
}


int database(vector<videoGame*> &videoGames, vector<movie*> &movies, vector<music*> &music) {
   string option;
   int intOption;
   cout << "type command: ";
   cin >> option;
   if(option == "commands") {
       cout << "commands, add, remove, search, list, exit \n";
       database(videoGames, movies, music);
   }
   
   if(option == "add") {
      
       cout << "type of media to add: ";
       cin >> option;
       if(option == "game") {
           addVideoGame(videoGames);
       }
       if(option == "music") {
           addMusic(music);
       }
       if(option == "movie") {
           addMovie(movies);
       }
       database(videoGames,movies,music);
   }
   
   if(option == "list") {
       cout << "video games" << '\n';
        for(int i = 0; i < videoGames.size(); i++) {
            cout << videoGames.at(i)->title << "\n";
        }
        cout << "movies\n";
        for(int i = 0; i < movies.size(); i++) {
            cout << movies.at(i)->title << "\n";
        }
        cout << "music\n";
        for(int i = 0; i < music.size(); i++) {
            cout << music.at(i)->title << "\n";
        }
        database(videoGames,movies,music);
   }
   
   if(option == "remove") {
       cout << ("thing to remove:");
       cin >> option;
       remove(videoGames,movies,music,option);
       database(videoGames, movies, music);
   }
   
   if(option == "search") {
       cout << "search by year or title\n";
       cin >> option;
       if(option == "year") {
           cout << "search year\n";
           cin >> intOption;
           search(videoGames,movies,music,"",intOption);
       }
       if(option == "title") {
           cout << "search title name\n";
           cin >> option;
           search(videoGames,movies,music,option,0);
       }
   }

if(option == "exit" || option == "quit" || option == "close" || option == "end" || option == "end program") {
    return 0;
}
cout << "not a valid command \n";
database(videoGames,movies,music);
return 0;
}

int remove(vector<videoGame*> &videoGames, vector<movie*> &movies, vector<music*> &music, string query) {
   string confirmAction;
    for(vector<videoGame*>::iterator it = videoGames.begin(); it != videoGames.end(); ++it) {
        if(query == (*it)->title) {
            cout << "are you sure? ";
            cin >> confirmAction;
     if(confirmAction == "yes") {
     videoGames.erase(it); 
     cout << query << " has been removed\n";
     return 0;
     }
        }
        }
       
       
        database(videoGames,movies,music);
        return 0;
}
int search(vector<videoGame*> &videoGames, vector<movie*> &movies, vector<music*> &music, string query, int yer) {
    for(int i = 0; i < videoGames.size(); i++) {
        if(query == videoGames.at(i)->title || yer == videoGames.at(i)->year) {
            cout << videoGames.at(i)->title << "\n";
        }
        }
        for(int i = 0; i < movies.size(); i++) {
            if(query == movies.at(i)->title || yer == movies.at(i)->year) {
            cout << movies.at(i)->title << "\n";
        }
        }
        for(int i = 0; i < music.size(); i++) {
            if(query == music.at(i)->title || yer == movies.at(i)->year) {
            cout << music.at(i)->title << "\n";
        }
        }
        database(videoGames,movies,music);
	return 0;
}
int addVideoGame(vector<videoGame*> &videoGames) {
videoGames.push_back(new videoGame());
return 0;
}
int addMusic(vector<music*> &musics) {
musics.push_back(new music());
return 0;
}
int addMovie(vector<movie*> &movies) {
movies.push_back(new movie());
return 0;
}

