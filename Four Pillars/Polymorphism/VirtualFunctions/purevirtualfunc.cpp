#include<bits/stdc++.h>
using namespace std;

class Instruments{
    public:
    virtual void play() = 0;//pure virtual function
};

class Guitar : public Instruments{
    public:
    void play(){
        cout << "Guitar is playing" << endl;
    }
};
int main(){
   Instruments* i1 = new Guitar();
   i1 -> play();
}