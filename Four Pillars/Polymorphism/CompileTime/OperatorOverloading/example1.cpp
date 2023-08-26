#include<bits/stdc++.h>
using namespace std;

class Human{
    public:
    string name;
    int money;

    Human(string name,int money){
        this -> name = name;
        this -> money = money;
    }
};

class RecordList{
    public:
    vector<Human> records;

    void operator+= (Human& h){
        this -> records.push_back(h);
    }
};

ostream& operator<<(ostream& COUT, Human& h){
    COUT << "the name is " << h.name << endl;
    COUT << "the money: " << h.money << endl;
    return COUT;
}
ostream& operator<<(ostream& COUT,RecordList& rl){
        for(Human h: rl.records){
            COUT << h << endl;
        }
        return COUT;
    }
int main(){
    Human h("abc", 20000);
    Human h1("def", 30000);

    RecordList rl;
    rl += h;
    rl += h1;

    cout << rl;
}