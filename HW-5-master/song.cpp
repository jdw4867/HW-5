//
//
//

#include "song.h"

using namespace std;

Song::Song(){
    title = "";
    artist = "";
    size = 0;
}

Song::Song(string title, string artist, int size){
    this->title = title;
    this->artist = artist;
    this->size = size;
}

void Song::setTitle(string title){
    this->title = title;
}

void Song::setArtist(string artist){
    this->artist = artist;
}

void Song::setSize(int size){
    this->size = size;
}


bool Song::operator > (Song const &song2){
    if(title > song2.title) return true;
    else if(artist > song2.artist) return true;
    else if(size > song2.size) return true;
    else return false;

    //true if later in the alphabet or greater size
}

bool Song::operator < (Song const &song2){
    if(title < song2.title) return true;
    else if(artist < song2.artist) return true;
    else if(size < song2.size) return true;
    else return false;

    //true if earlier in the alphabet or greater size
}

bool Song::operator == (Song const &song2){
    if(title == song2.title && artist == song2.artist && size == song2.size) return true;
    else return false;

    //true if equal
}


