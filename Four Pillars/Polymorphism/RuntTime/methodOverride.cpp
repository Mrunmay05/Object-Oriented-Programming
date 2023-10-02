#include<bits/stdc++.h>
using namespace std;

/*
RUNTIME POLYMORPHISM : 
-> also known as dynamic polymorphism. METHOD OVERRIDING is a way to implement
runtime polymorphism.

METHOD OVERRIDING:
Method Overriding is a feature of C++ that allows a subclass or child class to
provide a specific implementation of a method that is already provided by its 
parent class or one of its parent classes. This feature is used to achieve runtime polymorphism.

Rules for Method Overriding:
1. Method of parent class and child class should have the same name.
2. Method of parent class and the method of child class must have same
parameters.
3. Can only be implemented through inheritance

*/


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
    Dog d;
    d.speak();
}
