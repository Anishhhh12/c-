#include<iostream>
using namespace std;

class Base1{
    public:
    void greet(){
        cout<<"how are you"<<endl;
    }
};

class Base2{
    public:
    void greet(){
        cout<<"kaise ho?"<<endl;
    }
};

class derived : public Base1, public Base2{
     int a;
    public:
     void greet(){
    
        Base1 :: greet();
     }
 };

 class B{
    public:
    void say(){
        cout<<"hello world"<<endl;
    }
 };

 class D : public B{
    int a;
    // D's new say() method will override base class's say() mathod
    public:
    void say(){
        cout<<"this is the beautiful"<<endl;
    }
 };

int main(){
    // ambguity 1
    // Base1 base1obj;
    // Base2 base2obj;
    // base1obj.greet();
    // base2obj.greet();
    // derived d;
    // d.greet();

    // ambiguity 2
    B b;
    b.say();
    D d;
    d.say();
    return 0;
}