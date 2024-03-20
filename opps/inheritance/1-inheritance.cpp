#include <iostream>
#include <string>
using namespace std;

class music_feature
{
private:
    string prev;
    string pause;
    string next;

public:
    void prev_action(string prev_btn)
    {
        if (prev_btn == "prev")
        {
            prevMusicPlay();
        }
    }

    void prevMusicPlay()
    {
        cout << "Prev music play function" << endl;
    }
};

class musicControl : public music_feature
{
};

int main(void)
{
    musicControl prev_music;
    prev_music.prev_action("prev");
}