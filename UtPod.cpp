//
//
//Describes functions of UtPod.h

#include "UtPod.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "song.h"

using namespace std;

int UtPod::getNumSongs() {
    int numSongs = 0;
    SongNode* songPtr = songs;

    if(songPtr == NULL) return numSongs;
    else{
        while(songPtr != NULL){
            numSongs++;
            songPtr = songPtr->next;
        }
        return numSongs;
    }
}

UtPod::UtPod() {
    songs = NULL;
    memSize = MAX_MEMORY;
}

UtPod::UtPod(int size) {
    songs = NULL;
    if(size > MAX_MEMORY || size <= 0) memSize = MAX_MEMORY;
    else memSize = size;
}

int UtPod::addSong(Song const &song) {
    if(song.getSize() <= getRemainingMemory()){
        SongNode *temp = new SongNode;
        temp->s = song;
        temp->next = songs;                     //adds to the head of the linked list
        songs = temp;
        return SUCCESS;
    }else{
        return NO_MEMORY;
    }
}

int UtPod::removeSong(Song const &song){
    SongNode* tempPtr = songs;
    SongNode* trail = songs;
    if(tempPtr == NULL) return NOT_FOUND;
    else{
        while(tempPtr != NULL){
            if(tempPtr->s == song){
                if(getNumSongs() == 1){
                    songs == NULL;
                    delete tempPtr;
                    return SUCCESS;
                }
                trail->next = tempPtr->next;
                delete tempPtr;
                return SUCCESS;
            }else {
                trail = tempPtr;
                tempPtr = tempPtr->next;
            }
        }
        return NOT_FOUND;
    }
}

void UtPod::shuffle(){
    int numSongs = getNumSongs();
    if(numSongs == 0 || numSongs == 1) return;
    unsigned int currentTime = (unsigned) time(0);
    srand(currentTime);
    for(int i = 0; i < numSongs; i++){
        SongNode* tempPtr1 = songs;
        SongNode* tempPtr2 = songs;

        int num1 = rand() % numSongs + 1;
        int num2 = rand() % numSongs + 1;

        for(int x = 0; x < num1-1; x++){
            tempPtr1 = tempPtr1->next;
        }
        for(int y = 0; y < num2-1; y++){
            tempPtr2 = tempPtr2->next;
        }
        Song temp = tempPtr2->s;
        tempPtr2->s = tempPtr1->s;
        tempPtr1->s = temp;
    }
    int y = 0;
}

void UtPod::showSongList(){
    SongNode* tempPtr = songs;
    if(tempPtr == NULL) cout << "The UtPod is empty." << endl;
    else{
        while(tempPtr != NULL){
            cout << tempPtr->s.getTitle() << ", " << tempPtr->s.getArtist() << ", " << tempPtr->s.getSize() << " MB" << endl;
            tempPtr = tempPtr->next;
        }
    }
}

void UtPod::sortSongList(){
    SongNode * tempPtr = songs;
    SongNode * incrPtr = songs;
    SongNode * lowest = songs;

    for(int i = 0; i < getNumSongs(); i++){
        lowest = incrPtr;
        tempPtr = incrPtr;
        while(tempPtr != NULL){
            if(tempPtr->s < lowest->s) lowest = tempPtr;
            tempPtr = tempPtr->next;
        }
        Song temp = lowest->s;
        lowest->s = incrPtr->s;
        incrPtr->s = temp;
        incrPtr = incrPtr->next;
    }
}

int UtPod::getTotalMemory() {
    return memSize;
}

void UtPod::clearMemory(){
    SongNode* tempPtr = songs;
    if(tempPtr == NULL) return;
    else{
        while(songs != NULL){
            tempPtr = songs;
            songs = songs->next;
            delete tempPtr;
        }
    }
}

int UtPod::getRemainingMemory(){
    int usedMem = 0;
    SongNode* tempPtr = songs;
    if(tempPtr == NULL) {
        return (getTotalMemory() - usedMem);
    }else{
        while(tempPtr != NULL){
           usedMem += tempPtr->s.getSize();
           tempPtr = tempPtr->next;
        }
        return (getTotalMemory() - usedMem);
    }
}

UtPod::~UtPod() {
    clearMemory();
}