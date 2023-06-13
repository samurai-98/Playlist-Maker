#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include "song.h"

using namespace std;

class playlist {
    private:
    vector<song> songVec;
    map<string, vector<string>> songMap;

    public:
    //string lowerCase(string line);
    void addSong(song title);
    void removeSong();
    string printVec(vector<string> strVec);
    void printPlaylist();

};

#endif
