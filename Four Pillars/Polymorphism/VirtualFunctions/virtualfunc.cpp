#include<bits/stdc++.h>
using namespace std;

/*

*/
class instrument{
    public:
    virtual void play(){
        cout << "Instrument is playing" << endl;
    }
};

class Guitar : public instrument{
    public:
    void play(){
        cout << "Guitar is Playing" << endl;
    }
};
int main(){
    instrument* is = new Guitar();
    is -> play();
}