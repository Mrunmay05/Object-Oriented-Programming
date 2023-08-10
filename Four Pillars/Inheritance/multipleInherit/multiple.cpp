#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    string name;
    int age;
};

class B{
    public:
    int height;
};

class C : public A , public B{
    
};
int main(){
    C c1;
    cout << c1.age << endl;
}