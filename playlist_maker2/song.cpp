#include <iostream>
#include <string>
#include "song.h"

using namespace std;

song::song() {
    artist = "";
    name = "";
    id = 0;
}

void song::setName(string songName) {
    name = songName;
}

void song::setArtist(string artistName) {
    artist = artistName;
}

void song::setId(int loc){
    id = loc;
}

string song::getName() {
    return this->name;
}

string song::getArtist() {
    return this->artist;
}

int song::getId() {
    return this->id;
}