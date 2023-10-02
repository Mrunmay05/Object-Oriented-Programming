#include<bits/stdc++.h>
using namespace std;

/*
POLYMORPHISM:
    1. The word polymorphism means having many forms.
    2. In simple words, we can define polymorphism as the ability 
       of a message to be displayed in more than one form.  

Real Life Example:
   Behaviour of humans can also be considered real time example of polymorphism.
   Like a person behaves differently with different person. The person can be
   causal with his friends, professional with his colleagues and seniors.

Types of Polymorphism:
   1. Compile Time Polymorphism
   2. Run time polymorphism


Compile Time Polymorphism:
 -> Achieved by function overloading and operator overloading.
 1. Function Overloading:
            - When there are multiple functions with the same name but
              different parameters, then the functions are said to be overloaded, hence this is known as Function Overloading.
            - Functions can be overloaded by changing the number of arguments or/and changing the type of arguments.
            - Function declaration that differ only in return type cannot be overloaded. 
            - Static functions cannot be overloaded. 
*/

class A{
    public:
    int a;
    int b;
    void sayHello(){
        cout << "Hello" << endl;
    }

    /*
      using such functions not allowed as name is completely same
      void sayHello(){
        cout << "Hello" << endl;
      }
    */ 
    
    //such function with changed parameter is allowed
    void sayHello(string name){
        cout << "Hello " << name << endl;
    }
    
    //function overloading with different number of arguments
    void sayHello(string name ,char ch){
        cout << "Hello " << name <<" "<< ch << endl;
    }

};
int main(){
    A a;
    a.sayHello("xyz", 'A');
}