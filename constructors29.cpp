#include<iostream>
using namespace std;

class Complex{
    int a,b;

    public:
      Complex(void);  // constructor declaration

    void printNumber(){
        cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
      } 
};

// this is a default constructor as it takes no parameters.
Complex :: Complex(void)    
{
    a =10;
    b =5;
}

int main(){
    Complex c;
    c.printNumber();

    return 0;
}

// characteristics of constructures
// 1. It should be declared in public section of the class
// 2. they are automatically invoked whenever the object is created.
// 3. they cannot retrun values and donot have return types.
// 4.It can have default arguments.
// 5.we cannot refer to their address.