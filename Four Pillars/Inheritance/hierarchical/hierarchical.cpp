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
    B b;
    C c;
    cout << "name of b is " << b.name << endl;
    cout << "name of c is " << c.name << endl;
}