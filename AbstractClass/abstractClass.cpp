#include<bits/stdc++.h>
using namespace std;

/*
Pure Virtual Function
--> A do nothing function is called Pure Virtual Function

Abstract Class
--> Any class which has one or more pure virtual functions is called Abstract class
--> One cannot create an object of Abstract class (can't instantiate it)
*/
class SmartPhone{
    public:
    virtual void makeCalls() = 0;
    virtual void takePictures() = 0;
};

class Samsung : public SmartPhone{
    public:
    void makeCalls(){
        cout << "Calling using samsung..." << endl;
    }

    void takePictures(){
        cout << "taking pictures on samsung..."  << endl;
    }
};
int main(){
    SmartPhone* sm = new Samsung();
    sm -> makeCalls();
    sm -> takePictures();
}