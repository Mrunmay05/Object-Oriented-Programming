#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    string name;
    int age;

    public:
    void print(){
        cout << "name is :" << name << endl;
        cout << "age is :" << age << endl;
    }
};

class B : public A{
    public:
    int weight;
    int height;

    public:
    void newPrint(){
        cout << "weight is :" << weight << endl;
        cout << "height is :" << height << endl;
    }
};

class C : private B{
    public:
    void details(){
        cout << "name is :" << name << endl;
        cout << "weight is :" << weight << endl;
        cout << "age is :" << age << endl;
        cout << "height is :" << height << endl;
    }
};

int main(){
    C c1;
    c1.details();
}