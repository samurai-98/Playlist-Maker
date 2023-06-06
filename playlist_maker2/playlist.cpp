#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "playlist.h"

using namespace std;

    
void playlist::addSong(song title) {
    list.push_back(title);
    list[(list.size()-1)].setId(list.size());
}

//void playlist::removeSong(song title) {}

void playlist::printPlaylist() {
    unsigned int i;
    //stringstream ss;

    for(i = 0; i < list.size(); i++) {
        cout << list[i].getId();
        cout << ": " << list[i].getArtist() << " - " << list[i].getName() << endl;
    }

    //string songList = ss.str();
    //return songList;
}