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
    UtPod t;
/*
    Song s1("Beatles", "Hey Jude1", 4);
    int result = t.addSong(s1);
    cout << "add result = " << result << endl;

    t.showSongList();

    Song s2("Beatles", "Hey Jude2", 5);
    result = t.addSong(s2);
    cout << "add result = " << result << endl;

    t.showSongList();

    Song s3("Beatles", "Hey Jude3", 6);
    result = t.addSong(s3);
    cout << "add result = " << result << endl;

    Song s4("Beatles", "Hey Jude4", 7);
    result = t.addSong(s4);
    cout << "add result = " << result << endl;

    Song s5("Beatles", "Hey Jude5", 241);
    result = t.addSong(s5);
    cout << "add result = " << result << endl;

    t.showSongList();

    Song s6("Beatles", "Hey Jude6", 400);
    result = t.addSong(s6);
    cout << "add result = " << result << endl;

    t.showSongList();

    result = t.removeSong(s2);
    cout << "delete result = " << result << endl;

    t.showSongList();

    cout << endl;

    t.shuffle();

    t.showSongList();

    cout << endl;
    cout << "--------------" << endl;
    t.clearMemory();
    t.showSongList();
    cout << endl << "--------------" << endl;


    cout << endl << "The following is an additional set of tests." << endl;

    result = t.removeSong(s3);
    cout << "delete result = " << result << endl;
    t.showSongList();
*/

    Song e1("Aeyonce", "Halo", 1);
    int result = t.addSong(e1);
    Song e2("Beyonce", "Halo", 2);
    result = t.addSong(e2);
    Song e3("Ceyonce", "Halo", 3);
    result = t.addSong(e3);
    Song e4("Deyonce", "Halo", 4);
    result = t.addSong(e4);
    Song e5("Heyonce", "Halo", 10);
    result = t.addSong(e5);
    Song e6("Beyonce", "Aalo", 10);
    result = t.addSong(e6);
    Song e7("Beyonce", "Balo", 10);
    result = t.addSong(e7);
    Song e8("Beyonce", "Halo", 50);
    result = t.addSong(e8);
    Song e9("Beyonce", "Halo", 34);
    result = t.addSong(e9);

    cout << endl;
    t.showSongList();
    cout << endl;
    t.shuffle();
    t.showSongList();
    cout << endl;

    t.sortSongList();
    t.showSongList();


/*
    result = t.removeSong(s1);
    cout << "delete result = " << result << endl;

    result = t.removeSong(s5);
    cout << "delete result = " << result << endl;

    result = t.removeSong(s4);
    cout << "delete result = " << result << endl;

    cout << endl;
    t.showSongList();

    result = t.addSong(s5);
    cout << "add result = " << result << endl;

    cout << endl;
    t.showSongList();
    cout << "memory = " << t.getRemainingMemory() << endl;

*/
}
