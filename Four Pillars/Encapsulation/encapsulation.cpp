#include<bits/stdc++.h>
using namespace std;

/*
Encapsulation:
Definition: Encapsulation is a process of wrapping of data and methods in a single unit.

Real Life Example: 
A Washing Machine and It's Power Button: What is the function that power button does?
Switches the machine on (obviously). But did u ever imagined the inside mechanism.
Doesn't matter unless it's functioning well. That's encapsulation. The object is wrapped
and inner details are hidden. Only thing is that object can be called and used. User friendly!

Role of Access Specifiers in Encapsulation
Access specifiers plays an important role in implementing encapsulation in C++.
The process of implementing encapsulation can be sub-divided into two steps:
        1. The data members should be labeled as private using the private access specifiers.
        2. The member function which manipulates the data members should be labeled as public 
           using the public access specifier.

How Encapsulation is achieved in a class
        1. Make all the data members private.
        2. Create public setter and getter functions for each data member in such a way that the set function set the value of data member and get function get the value of data member.


Advantages: 
        1. Data security
        2. Makes code manageable
        3. Prevents unauthorized access of data members

*/
class Student{
    private:
    string name;
    int age;
    int height;

    public:
    /*only members or functions inside this class will be able to 
    access all the private members.
    */

    Student(string name, int age){
        this -> name = name;
        this -> age = age;
    }
    int getAge(){
        return this -> age;
    }

    void print(){
        cout << "The name is : " << name << endl;
        cout << "The age is : " << age << endl;
    }
};
int main(){
    Student first("A", 30);
    /*here we accessed the private attribute age using the 
    public functions of the Student class
    */
    cout << first.getAge() << endl;
}