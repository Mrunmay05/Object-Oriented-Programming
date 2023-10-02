#include<bits/stdc++.h>
using namespace std;

class YoutubeChannel{
    private:
    string name;
    int subCount;

    protected:
    string ownerName;

    public:
    YoutubeChannel(string name, string ownerName){
        this -> name = name;
        this -> ownerName = ownerName;
    }

    void giveDetails(){
        cout << "Name of channel: " << name << endl;
        cout << "Name of channel owner : " << ownerName << endl;
    }
    virtual void practice(){
        cout << "This youtube channel is great" << endl;
    }
};

class cookingChannel : public YoutubeChannel{

    public:
    cookingChannel(string name, string ownerName) : YoutubeChannel(name, ownerName){

    }
    void practice(){
        cout << ownerName << " thinks cooking is very interesting" << endl;
    }
};

class singingChannel : public YoutubeChannel{

    public:
    singingChannel(string name, string ownerName) : YoutubeChannel(name, ownerName){

    }
    void practice(){
        cout << ownerName << " likes singing" << endl;
    }
};

int main(){
    cookingChannel ch("abc cooks", "abc");
    singingChannel sh("xyz sings", "xyz");

    ch.practice();
    sh.practice();

    YoutubeChannel *yt1 = &ch;
    YoutubeChannel *yt2 = &sh;

    yt1 -> practice();
    yt2 -> practice();
}