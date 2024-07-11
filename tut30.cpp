#include<iostream>
using namespace std;

class Complex{
    int a,b;

    public:
      Complex(int , int);  // constructor declaration

    void printNumber(){
        cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
    } 
};

// this is a parameterized constructor as it takes two parameters.
Complex :: Complex(int x, int y)    
{
    a =x;
    b =y;
}

int main(){
    // implicit call
    Complex a(4, 6);

    // explicit call
    Complex b = Complex(5, 7);

    
    a.printNumber();
    b.printNumber();

    return 0;
}

