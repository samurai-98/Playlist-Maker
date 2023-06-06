#include <iostream>
#include <string>
#include "song.h"
#include "song.cpp"
#include "playlist.h"
#include "playlist.cpp"

using namespace std;

int main() {
    string songName;
    string artName;
    int num;
    int j;
    playlist myList;

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
        myList.addSong(obj);
    }

   myList.printPlaylist();

    return 0;
}
