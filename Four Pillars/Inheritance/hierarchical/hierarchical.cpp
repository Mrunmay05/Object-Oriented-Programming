#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    string name;
    int age;
};

class B : public A{

};

class C : public A{

};

int main(){
    B b; //creating object of class B
    C c; //creating object of class C
    b.name = "B"; //assigning name to object b
    c.name = "C"; //assigning name to object c
    cout << "name of b is " << b.name << endl; //printing name of object b
    cout << "name of c is " << c.name << endl; //printing name of object c
}