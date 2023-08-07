#include <bits/stdc++.h>
using namespace std;

class Hero
{
private:
    string name;
    int health;
public:
    static int timePerLevel;
    /*
    static keyword:
    static can be used to create a data member that belongs to class.
    We dont need to create an object to access a static data member.
    As the variables declared as static are initialized only once
    as they are allocated space in separate static storage so,
    the static variables in a class are shared by the objects. 
    */
    

    
    /*
    DEFAULT constructor (not necessary to declare, already present in a class)
    Already present in a class, but if any other constructor gets declared (for e.g parametrized)
    then this constructor gets removed(no longer present)
    */
    Hero(){
    //add any cout statement here to check the constructor being called implicitly
        cout << "Default constructor called" << endl;
    }

    //PARAMETRIZED CONSTRUCTOR
    /*
    THIS keyword   : the this keyword stores the address of the 
    current created object. It is basically a pointer
    to the current object
    */
    Hero(int health){
        this -> health = health; 
        /*here this -> health is the the health of the object
        and the health passed in parameter is the health that is 
        to be allocated to the object.
        */
    }

    Hero(string name, int health){
        this -> name = name;
        this -> health = health; 
        /*here this -> health is the the health of the object
        and the health passed in parameter is the health that is 
        to be allocated to the object.
        */
    }
    
    /*
    COPY constructor: this constructor is used when try to create a
    copy of our object.
    When we pass an object as a parameter we always pass it by reference.
    Why pass by reference? Because if we pass by value then the temp actually
    creates a copy of the object which will again call the copy constructor itself
    which will result in an infinite loop. So when we pass by reference the new copy
    object references the same memory space as the original object.
    Hero(Hero temp){
        this -> name = name;
        this -> health = health;
    }
    */
    Hero(Hero& temp){
        cout << "copy constructor called"<< endl;
        this -> name = name;
        this -> health = health;
    }

    void setName(string newName)
    {
        name = newName;
    }
    string getName(){
        return name;
    }

    int getHealth(){
        return health;
    }

    void setHealth(int h){
        health = h;
    }

    void print(){
        cout << "name of hero is: " << name << endl;
        cout << "health is: " << health << endl;
    }

    /*
    Just like static members, functions too dont need object creation to access them.
    Static member functions are allowed to access only the static data members or 
    other static member functions.
    */
    static int printS(){
        cout << timePerLevel << endl;
    }

    /*
    DESTRUCTOR :  - represented by adding ~ClassName(){}
    the job of a destructor is to deallocate memory that is 
    assigned to the objects.
                  - for static objects destructor gets called automatically
    */
    ~Hero(){
        cout << "Destructor Called" << endl;
    }

};

int Hero ::timePerLevel = 20;
int main()
{
    //static object creation
    //Constructor gets invoked when we create a object(static or dynamic)
    Hero a;

    //calls parametrized constructor
    Hero b(20);

    Hero c("abc",50);
    cout << "details of c:"<< endl;
    c.print();

    /*
    In the example below we create an object d which is the exact copy
    */
    Hero d(c);

    Hero e("bcd",40);

    cout << "details of e:"<< endl;
    e.print();

    e = c;
    /*
    Here the '=' sign acts as a copy assignment operator
    the fundamental working behind it is:
    e.health = c.health
    e.name = c.name
    */
   cout<<" new details of e" << endl;
   e.print();

   Hero *f = new Hero;
   //for dynamic objects such as this, destructor needs to be called manually/
   delete f;

   /*
   Like member functions and member function arguments, the objects of a class
   can also be declared as const. An object declared as const cannot be modified
   and hence, can invoke only const member functions as these functions ensure 
   not to modify the object.
   */
   const Hero x("const obj", 30);
   //x.setHealth(40); (not possible to change as object is const)

   //static data members of a class can be accessed without creating objects.
   cout << "value of the static member is :" << Hero :: timePerLevel << endl;

   //calling a static function:
   cout << "The value of static member is : ";
   Hero :: printS();
   
}