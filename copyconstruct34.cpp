#include<iostream>
using namespace std;

class Number{
    int a;
    public:
    Number(){
        a = 0;
    }  /*we have to make a default constructor which runs without input*/
    Number(int num){
        a = num;
    }
//  when no copy constructor is found , compiler supplies its own copy constructor.
    Number(Number &obj){
        cout<<"copy constructor called"<<endl;
        a = obj.a;
    }

    void display(){
        cout<<"the number for this object is"<< a <<endl;
    }
};

int main(){
   Number x, y, z(45), z2;
   z.display();
   x.display();
   y.display();

   Number z1(z);  /*copy constructor invoked*/
   z1.display();
// z1 should exactly resemble z or x or y.
   z2 = z; /*copy constructor not called because it is assign*/
   z2.display();
   Number z3 = z; /*copy construction invoked*/
   z3.display();
    return 0;
}
// when copy constructor not defined then compiler supply copy constructor make their own