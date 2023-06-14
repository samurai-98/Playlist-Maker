#ifndef SONG_H
#define SONG_H

#include <iostream>
#include <string>

using namespace std;

class song
{
private:
    string artist;
    string name;
public:
    song() {
        artist = "";
        name = "";
    }

    void setName(string songName) {
        name = songName;
    }

    void setArtist(string artistName) {
        artist = artistName;
    }

    string getName() {
        return name;
    }

    string getArtist() {
        return artist;
    }
};

#endif
