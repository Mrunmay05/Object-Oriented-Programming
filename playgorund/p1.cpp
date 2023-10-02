#include<bits/stdc++.h>
using namespace std;

struct Human{
    string name;
    int money;

    Human(string name, int money){
        this -> name = name;
        this -> money = money;
    }
};

ostream& operator<< (ostream &COUT, Human &h){
    cout << "name is: " << h.name << endl;
    cout << "money is: " << h.money << endl;
    return COUT;
}

int main(){
    Human h1("xyz",20000);
    Human h2("abc", 30000);

    cout << h1 << h2 << endl;
}