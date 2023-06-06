#include <iostream>
#include <string>
#include "song.h"
#include "song.cpp"
#include "playlist.h"
#include "playlist.cpp"

using namespace std;

int main() {
    //song playList[3];
    //song obj;
    string songName;
    string artName;
    /*unsigned int i;

    for(i = 0; i < 3; i++){
        cout << "Song:";
        getline(cin, songName);
        cout << endl;
        cout << "Artist:";
        getline(cin, artName);
        cout << endl;

        obj.setArtist(artName);
        obj.setName(songName);
        obj.setId((i+1));
        playList[i] = obj;
    }

    for(i = 0; i < 3; i++) {
        cout << playList[i].getId();
        cout << ": " << playList[i].getArtist() << " - " << playList[i].getName() << endl;
    }*/
    //int num;
    int j;
    playlist myList;

    /*cout << "How many songs would you like to add?: ";
    cin >> num;*/
    for (j = 0; j < 3; j++) {
        song obj;
        cout << "Name:";
        getline(cin, songName);
        cout << endl;
        cout << "Artist:";
        getline(cin, artName);
        cout << endl;

        obj.setArtist(artName);
        obj.setName(songName);
        //obj.setId((j+1));
        myList.addSong(obj);
    }

   myList.printPlaylist();

    return 0;
}