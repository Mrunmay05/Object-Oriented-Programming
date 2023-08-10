#include<bits/stdc++.h>
using namespace std;

/*
C++ has the ability to provide the operators with a special meaning for a 
data type, this ability is known as operator overloading. For example, we 
can make use of the addition operator (+) for string class to concatenate
two strings. We know that the task of this operator is to add two operands.
So a single operator (+), when placed between integer operands, adds them
and when placed between string operands, concatenates them. 
Example: + operator adds two operands if they are integers and concatenates them if they are string.
But what if we want to add two class objects, for that we can overload the operator + 
*/
struct Human{
    string name;
    int money;

    Human(string name, int money){
        this -> name = name;
        this -> money = money;
    }
};

/*
in the main function, the << operator has two operands 
 of types 1.cout(ostream) 2.h(Human)

We pass the arguments by reference because in such datatypes
copying can be expensive sometimes. 
*/

/* 
READ THIS BEFORE READING THE OSTREAM RETURN TYPE:

void operator<< (ostream &COUT,Human& h){
    cout << "Name of the human is : " << h.name << endl;
    cout << "Money the human has : " << h.money << endl;
}
*/         
         
/*
what if we want to print two objects at once like cout << h1 << h2 << endl;
It will give an error because the overloaded operator's return type is void.
To solve this problem, we make the return type as ostream. 
*/
ostream& operator<< (ostream &COUT,Human& h){
     cout << "Name of the human is : " << h.name << endl;
     cout << "Money the human has : " << h.money << endl;
     return COUT; 
}

struct Record{
    vector<Human> v;

    void operator+= (Human& h){
        this -> v.push_back(h);
    }
};

int main(){
    Human h("Mrunmay", 40000);
    Human h1("Dinesh", 50000);

    /*
       the  "cout << 5;" will run fine
       but what if we try "cout << h ;" ? It wont print the object directly, but we can 
       overload the insertion operator "<<" to do so.
    */

   cout << h << endl;
   //the above statement can also be called like:
   operator<< (cout,h);
   
   cout << h << h1 << endl;

   Record r;
   //r contains a vector of type Human, but using += won't add h to r
   // to solve this problem, we can overload the += operator
   r += h;
}