#include <iostream>
#include <fstream>
#include <cstring>
#include "main.h"
using namespace std;

int main() {
  //declaring variables:
  Song SongList[NAME_CAP];
  int songAmount = 0;
  char userIn = ' ';
  char fileName[] = "songs.txt";
  //do-while loop continues asking user for input until 'q' is entered:
  do {
    //menu function is called to show options:
    menuFunc();
    //songs are read from text file:
    SongList[NAME_CAP].ReadSongs(SongList, songAmount);
    //input taken from user:
    cin >> userIn;
    //user inputs 'i' to enter a new song:
    if (userIn == 'i'){
      SongList[NAME_CAP].InsertSong(SongList, songAmount);
    }
    //user inputs 'r' to remove a song:
    else if (userIn == 'r'){
      SongList[NAME_CAP].RemoveSong(SongList, songAmount);
    }
    //user inputs 's' to search for an artist/album:
    else if (userIn == 's'){
      SongList[NAME_CAP].SearchSong(SongList, songAmount);
    }
    //user inputs 'd' to display the list of songs:
    else if (userIn == 'd'){
      SongList[NAME_CAP].PrintSongs(SongList, songAmount);
    }
    //user enters 'q' to quit:
  } while (userIn != 'q');
  cout << "Come again soon!" << endl;
}

//menuFunc outputs the menu for the user:
void menuFunc(){
  cout << "Welcome to the Saksy Song Playlist maker!" << endl;
  cout << "Here you can create a song playlist that can be adjusted " << endl;
  cout << "(add/remove songs) as you see fit. Additionally, you can search for" << endl;
  cout << "existing songs in the playlist by album or artist." << endl;
  cout << '\t' << "To insert a new song to the playlist: [ Press i ]" << endl;
  cout << '\t' << "To remove an existing song (by index): [ Press r ]" << endl;
  cout << '\t' << "To search the list (by album/artist): [ Press s ]" << endl;
  cout << '\t' << "To display all current songs in the playlist: [ Press d ]" << endl;
  cout << '\t' << "To quit: [ Press q ]" << endl;
}