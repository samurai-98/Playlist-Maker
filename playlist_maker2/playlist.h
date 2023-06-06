#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <iostream>
#include <vector>
#include <string>
#include "song.h"

using namespace std;

class playlist {
    private:
    vector<song> list;

    public:
    void addSong(song title);
    //void removeSong(song title);
    void printPlaylist();

};

#endif