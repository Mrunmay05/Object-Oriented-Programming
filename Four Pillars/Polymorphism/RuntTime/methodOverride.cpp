#include<bits/stdc++.h>
using namespace std;

/*
RUNTIME POLYMORPHISM : 
-> also known as dynamic polymorphism. METHOD OVERRIDING is a way to implement
runtime polymorphism.

METHOD OVERRIDING:
its a feature that allows you to reduce the parent class method in child class based on its
requirement.

Rules for Method Overriding:
1. Method of parent class and child class should have the same name.
2. Method of parent class and the method of child class must have same
parameters.
3. Can only be implemented through inheritance

*/

class A{
    public:
    void print(){
        cout << "A is greatest" << endl;
    }
};

class B : public A{
    public:
    // void print(){
    //     cout << "B is greatest" << endl;
    // }
};

class Animal{
    public:
    void speak(){
        cout << "Speaking" << endl;
    }
};

class Dog : public Animal{
    public:
    void speak(){
        cout << "Barking" << endl;
    }
};

int main(){
    A a;
    a.print();

    B b;
    b.print();

    Dog d;
    d.speak();
}