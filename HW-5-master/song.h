//
//Written by Jonathan Walsh and Rainey Shah
//Last update 10/27/18
//Describes the Song class, which involves three attributes per song

#include <string>

using namespace std;

#ifndef SONG_H
#define SONG_H

class Song
{
private:
    string title;
    string artist;
    int size;

public:
    Song();
    Song(string title, string artist, int size);

    string getTitle() const {return title; }
    string getArtist() const {return artist; }
    int getSize() const {return size; }

    void setTitle(string title);
    void setArtist(string artist);
    void setSize(int Size);

    bool operator > (Song const &rhs);
    bool operator < (Song const &rhs);
    bool operator == (Song const &rhs);
};

#endif
