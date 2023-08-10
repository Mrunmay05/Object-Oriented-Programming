#include<bits/stdc++.h>
using namespace std;


/*
PROTECTED ACCESS MODIFIER:
data member is accessible inside the class itself  and in its child classes.
*/

/*
INHERITANCE:
The capability of a class to derive properties and characteristics
from another class is called Inheritance. Inheritance is one of the
most important features of Object-Oriented Programming.

Sub Class : The class that inherits properties from another class is
called sub class / derived class / child class.

Super Class : The class whose properties are inherited by a sub-class
is called Base Class or Superclass.

When and why to use Inheritance :
When multiple classes have same methods, it thus reduces redundancy. 
Example: Consider a group of vehicles. You need to create classes for Bus, Car,
and Truck. The methods fuelAmount(), capacity(), applyBrakes() will be
the same for all three classes.

Modes of Inheritance :
   1. Public Mode: If we derive a subclass from a public base class,then the
                   public member of the base class will become public in the 
                   derived class and protected members of the base class will
                   become protected in the derived class. 

   2. Protected Mode: If we derive a subclass from a Protected base class.
                      Then both public members and protected members of the 
                      base class will become protected in the derived class. 

   3. Private Mode: If we derive a subclass from a Private base class. Then
                    both public members and protected members of the base
                    class will become Private in the derived class. 

   Example:
    1. Private Derivation: 
      class ABC : private XYZ { };
    2. Public Derivation: 
      class ABC : public XYZ { };
    3. Protected Derivation:
      class ABC : protected XYZ { };

Types of Inheritance:
1. Single Inheritance : Single Inheritance: In single inheritance, a class
   is allowed to inherit from only one class. i.e. one subclass is inherited by one base class only.

2. Multiple Inheritance: Multiple Inheritance is a feature of C++ where a class can inherit from
   more than one class. i.e one subclass is inherited from more than one base class.
   
   Syntax for multiple inheritance :
   class subclass_name : access_mode base_class1, access_mode base_class2, ....
    {
      // body of subclass
    };

3.  Multilevel Inheritance: In this type of inheritance, a derived class is created from another
    derived class.

    Syntax for multilevel:
    class C
    { 
       ... .. ... 
    };
    class B:public C
    {
       ... .. ...
    };
    class A: public B
    {
       ... ... ...
    };

4.  Hierarchical Inheritance: In this type of inheritance, more than one subclass is inherited from
    a single base class. i.e. more than one derived class is created from a single base class.
*/

class Human{ //Parent Class
    public:
    int height;
    int weight;

    private:
    int age;

    int getAge(){
        return this -> age;
    }

    int setWeight(int w){
        this -> weight = w;
    }
};

/*
Use of protected access modifier
Now here this class will make the public data members of base class
as protected, so we will need to write functions inside the child class
to access these

    class Male : protected Human{
    public:
    void getHeight(){
        cout << "height is " << height << endl; 
    }
  };

*/


class Male : public Human{
    public:
    string color;

    void sleep(){
        cout << "Male sleeping" << endl;
    }
};

class Female : private Human{
    public:
    void getWeight(){
        cout << "weight is " << weight << endl;
    }
};

int main(){
    Male m1;
    cout << m1.height << endl;

    Female f;
    f.getWeight();
}