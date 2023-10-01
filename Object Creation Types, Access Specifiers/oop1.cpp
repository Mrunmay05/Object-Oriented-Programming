#include <bits/stdc++.h>
using namespace std;

class Hero
{
private:
    /*
    members or function under private access modifier can be accessed
    only inside the class
    */
    string name;
    int health;

public:
    /*
    accessible outside the class
    */
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
};
int main()
{
    //static allocation of object
    Hero a;

    a.setName("A");
    a.setHealth(30);

    //function call for static creation of object:
    cout << "health is: " << a.getHealth() << endl;
    cout << "name is: " << a.getName() << endl;  

    //dynamic allocation of object
    Hero *b = new Hero;


    //function call for dynamic creation of object:
    /*
    we use (*b).func() because b itself is an address
    and we need the value b is pointing to.

    We can also use b -> func();
    */
    b -> setName("B");
    b -> setHealth(40);

    cout << "health is: " << (*b).getHealth() << endl;
    cout << "name is :" << b -> getName() << endl;

    cout<<sizeof(b);

}