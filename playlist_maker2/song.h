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
    //int id;
public:
    song() {
        artist = "";
        name = "";
        //id = 0;
    }

    void setName(string songName) {
        name = songName;
    }

    void setArtist(string artistName) {
        artist = artistName;
    }

    /*void setId(int loc){
        id = loc;
    }*/

    string getName() {
        return name;
    }

    string getArtist() {
        return artist;
    }

    /*int getId() {
        return id;
    }*/

};

#endif
