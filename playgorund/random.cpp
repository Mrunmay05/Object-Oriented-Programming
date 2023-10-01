#include<bits/stdc++.h>
using namespace std;

class Hero{
    public:
    string name;
    int power;
    Hero(){
        cout << "constructor called" << endl;
    }
};

int main(){
    Hero h1;
    h1.name = "zyx" ;
    h1.power = 123;

    cout << h1.name << endl;
}