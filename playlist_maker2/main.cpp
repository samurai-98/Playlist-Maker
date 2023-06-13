#include <iostream>
#include <string>
#include "song.h"
#include "playlist.h"
#include "playlist.cpp"

using namespace std;

void displayMenu() {
    cout << "1: Add Song" << endl;
    cout << "2: Remove Song" << endl;
    cout << "3: Print Playlist" << endl;
    cout << "4: Display Menu" << endl;
    cout << "5: Exit" << endl << endl;
}


int main() {
    playlist myPlaylist;
    int decision;
    bool cont = true;

    displayMenu();

    while (cont != false) {

        cout << "What would you like to do?: ";
        cin >> decision;
        cout << endl;

        if (decision == 1) {
            string songName;
            string artName;
            int num;
            int j;

            cout << "How many songs would you like to add?: ";
            cin >> num;
            int listLen = num;
            cin.ignore();
            for (j = 0; j < num; j++) {
                song obj;
                cout << "Name: ";
                getline(cin, songName);
                cout << endl;
                cout << "Artist: ";
                getline(cin, artName);
                cout << endl;

            obj.setArtist(artName);
            obj.setName(songName);
            myPlaylist.addSong(obj);
            }
        } else if (decision == 2) {
            myPlaylist.removeSong();
            cin.clear();
            cin.ignore();
            continue;
        } else if (decision == 3) {
            myPlaylist.printPlaylist();
            cin.clear();
            cin.ignore();
            continue;
        } else if (decision == 4) {
            displayMenu();
            cin.clear();
            cin.ignore();
            continue;
        } else if (decision == 5) {
            cout << "Goodbye" << endl;
            cont = false;
        } else {
            cout << "Invalid input" << endl << endl;
            displayMenu();
            cin.clear();
            cin.ignore();
            continue;
        }

        
        
    }

    return 0;
}
