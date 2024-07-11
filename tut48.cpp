#include<iostream>
using namespace std;

/*
Case1:
class B : public A{
    order of executio of constructor --> first A() the B()
  first constructor of base class is executed.
};

Case2:
class A: public B, public C{
    order of constructor execution -->B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    order --->C() then B() then A()
}
*/
class base1{
    int data1;
    public:
    base1(int i){
        data1 = i;
        cout<<"base1 constructor called"<<endl;
    }
    void printdatabase1(void){
        cout<<"the value of data1 is"<<data1<<endl;
    }
};

class base2{
    int data2;
    public:
    base2(int i){
        data2 = i;
        cout<<"base2 constructor called"<<endl;
    }
    void printdatabase2(void){
        cout<<"the value of data2 is"<<data2<<endl;
    }
};

class derived: public base1, public base2{
      int Derived1, Derived2;
      public:
      derived(int a, int b, int c, int d): base1(a), base2(b){
        Derived1 = c;
        Derived2 = d;
        cout<<"derived class constructor called"<<endl;
      }
      void printdataderived(void){
        cout<<"the value of derived1 is"<<Derived1<<endl;
        cout<<"the value of derived2 is"<<Derived2<<endl;
    }
};
int main(){
    derived harry(1,2,3,4);
    harry.printdatabase1();
      harry.printdatabase2();
      harry.printdataderived();
    return 0;
}