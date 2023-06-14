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
    cout << "4: Print Songs by a Specific Artist" << endl;
    cout << "5: Display Menu" << endl;
    cout << "6: Exit" << endl << endl;
}


int main() {
    playlist myPlaylist;
    int decision;
    bool cont = true;

    displayMenu();

    while (cont != false) {

        cout << "What would you like to do? (Enter '5' to see options): ";
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
        } else if (decision == 3) {
            myPlaylist.printPlaylist();
        } else if (decision == 4) {
            myPlaylist.printByArtist();
        } else if (decision == 5) {
            displayMenu();
        } else if (decision == 6) {
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
