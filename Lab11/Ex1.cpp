#include <iostream>
#include <string>
using namespace std;

class MusicPlaylist {
    private:
        string songs[20];
        int currentTrack;
        int storedSize = 0;
    public:
        void add(string song) {
            songs[storedSize] = song;
            storedSize++;
        }

        void setCurrentTrack(int track) {
            currentTrack = track - 1;
        }

        string play() {
            return songs[currentTrack];
        }
};


int main()
{
    MusicPlaylist mp;
    mp.add("Shape of You");
    mp.add("That's What I Like");
    mp.add("Humble");
    mp.setCurrentTrack(1);
    cout << mp.play() << endl; // แสดงเพลงลำดับที่ 1 คือ Shape of You
}