#include<bits/stdc++.h>
using namespace std;

/*
ABSTRACTION:

Abstraction means displaying only essential information and hiding the details.
Data abstraction refers to providing only essential information to the outside world,
hiding all the background details or implementations.

Real Life Example:
The man only knows that pressing the accelerator will increase the speed of the car
or applying brakes will stop the car but he does not know how on pressing the accelerator
the speed is actually increasing, he does not know about the inner mechanism of the car or
the implementation of the accelerator, brakes, etc in the car. This is what abstraction is.


Abstraction has two types:
1.Data Abstraction : shows only required information about the data and hides the unnecessary
data.

2.Control Abstraction : This type only shows the required information about the implementation
and hides unnecessary information.

Implemented using two ways:

1. Abstraction using Classes
We can implement Abstraction in C++ using classes. The class helps us to group data members and
member functions using available access specifiers. A Class can decide which data member will 
be visible to the outside world and which is not.

2. Abstraction in Header files:
consider the pow() method present in math.h header file. Whenever we need to calculate the power
of a number, we simply call the function pow() present in the math.h header file and pass the numbers
as arguments without knowing the underlying algorithm according to which the function is actually
calculating the power of numbers.

Advantages of Abstraction:
 1. Avoids code duplication and increases reusability.
 2. Helps to increase the security of an application or
    program as only important details are provided to the user.
 3. It reduces the complexity as well as the redundancy of the code,
    therefore increasing the readability.
*/

class Abstraction{
    private:
    int a , b;
    public:
    void set(int a, int b){
        this -> a = a;
        this -> b = b;
    };

    void display(){
        cout << "Value of A is: " << a << endl;
        cout << "Value of B is: " << b << endl;
    }
};
int main(){
    Abstraction ab;
    ab.set(2,3);
    ab.display();
}