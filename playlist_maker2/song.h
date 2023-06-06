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
    int id;
public:
    song();
    //~song();

    void setName(string songName);
    void setArtist(string artistName);
    void setId(int loc);

    string getName();
    string getArtist();
    int getId();
};

#endif