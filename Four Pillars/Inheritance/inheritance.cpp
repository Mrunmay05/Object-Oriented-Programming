#include<bits/stdc++.h>
using namespace std;


/*
PROTECTED ACCESS MODIFIER:
A data member declared as protected is accessible within the class itself and in its derived classes.
*/

/*
INHERITANCE:
Inheritance is a fundamental principle of object-oriented programming where a class (child class) can inherit properties and characteristics
from another class (parent class). This feature promotes code reusability and logical structure.

Child Class (Sub Class): The class that inherits properties from another class is called a child class or derived class.

Parent Class (Super Class): The class whose properties are inherited by a child class is called a parent class or base class.

When and why to use Inheritance :
Inheritance is used when multiple classes share common attributes or methods, reducing redundancy. 
Example: Consider a group of vehicles. You need to create classes for Bus, Car, and Truck. The methods fuelAmount(), capacity(), applyBrakes() 
will be the same for all three classes.

Modes of Inheritance :
   1. Public Mode: If a subclass is derived from a public base class, then the public members of the base class become public in the 
                   derived class and protected members of the base class become protected in the derived class. 

   2. Protected Mode: If a subclass is derived from a Protected base class, then both public and protected members of the base class 
                      become protected in the derived class. 

   3. Private Mode: If a subclass is derived from a Private base class, then both public and protected members of the base class 
                    become Private in the derived class. 

   Example:
    1. Private Derivation: 
      class ABC : private XYZ { };
    2. Public Derivation: 
      class ABC : public XYZ { };
    3. Protected Derivation:
      class ABC : protected XYZ { };

Types of Inheritance:
1. Single Inheritance : A class (child class) is allowed to inherit from only one class (parent class).

2. Multiple Inheritance: A class (child class) can inherit from more than one class (parent classes).
   
   Syntax for multiple inheritance :
   class subclass_name : access_mode base_class1, access_mode base_class2, ....
    {
      // body of subclass
    };

3.  Multilevel Inheritance: A class can be derived from another derived class.

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

4.  Hierarchical Inheritance: More than one class (child classes) can be derived from a single class (parent class).
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