/* utPod_driver.cpp

 Driver for the UtPod that tests its functions.

 Written by Jonathan Walsh and Rainey Shah
 Last update 10/27/18

*/

#include <ctime>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include "song.h"
#include "UtPod.h"

using namespace std;

int main(int argc, char *argv[]) {
    UtPod t (450);

    Song s1("Beatles", "Hey Jude1", 1);
    int result = t.addSong(s1);
    cout << "add result = " << result << endl;

    Song s2("Beatles", "Hey Jude2", 2);
    result = t.addSong(s2);
    cout << "add result = " << result << endl;

    Song s3("Beatles", "Hey Jude3", 3);
    result = t.addSong(s3);
    cout << "add result = " << result << endl;

    Song s4("Beatles", "Hey Jude4", 4);
    result = t.addSong(s4);
    cout << "add result = " << result << endl;
    t.showSongList();

    Song s5("Beatles", "Hey Jude5", 513);
    result = t.addSong(s5);
    cout << "add result = " << result << endl;
    t.showSongList();

    result = t.removeSong(s2);
    cout << "delete result = " << result << endl;
    result = t.removeSong(s5);
    cout << "delete result = " << result << endl;
    t.showSongList();

    cout << endl;

    t.shuffle();

    t.showSongList();

    cout << endl;
    cout << "--------------" << endl << "There should be no songs between the lines, because clearMemory is called" << endl;
    t.clearMemory();
    t.showSongList();
    cout << endl << "--------------" << endl;


    cout << endl << "The following is an additional set of tests with new songs" << endl;
    result = t.removeSong(s2);
    cout << "delete result = " << result << endl;

    Song e1("A", "", 2);
    result = t.addSong(e1);
    cout << "add result = " << result << endl;
    cout << "++++++++++++++++" << endl;

    Song e2("A", "B", 1);
    result = t.addSong(e2);
    Song e3("A", "H", 41);
    result = t.addSong(e3);
    Song e4("A", "H", 30);
    result = t.addSong(e4);
    Song e5("A", "C", 40);
    result = t.addSong(e5);
    Song e6("B", "A", 10);
    result = t.addSong(e6);
    Song e7("B", "C", 5);
    result = t.addSong(e7);
    Song e8("B", "Z", 50);
    result = t.addSong(e8);
    Song e9("B", "A", 34);
    result = t.addSong(e9);
    Song e10("B", "A", 8);
    result = t.addSong(e10);
    t.showSongList();

    cout << endl << "Below is shuffled" << endl;
    t.shuffle();
    t.showSongList();

    cout << endl << "Below is sorted" <<endl;
    t.sortSongList();
    t.showSongList();

    cout << endl << "Below is shuffled again" << endl;
    t.shuffle();
    t.showSongList();

    cout << endl << "Below is sorted again" <<endl;
    t.sortSongList();
    t.showSongList();

    cout << "---------------" << endl << "Memory is cleared again" << endl << "-----------------" << endl;
    t.clearMemory();
//tests added by rainey
    //construct object
    Song R1("ACDC", "Thunderstruck", 8);
    //add to link list and check if it was successful

//test multiple runs and make sure that only two songs shuffle (this works)
    result = t.addSong(R1);
    Song R2("Shakira", "Hips Dont Lie", 1);
    result = t.addSong(R2);
    t.showSongList();
    cout << endl << "Below is two songs shuffled" << endl;
    t.shuffle();
    t.showSongList();

    cout << endl << "Below is the current song list" << endl;
    t.showSongList();
    cout << endl << "UtPod Remaining Memory = " << t.getRemainingMemory() << endl;
    cout << "Total UtPod Memory = " << t.getTotalMemory() << endl;



}
