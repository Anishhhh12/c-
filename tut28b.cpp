#include<iostream>
using namespace std;

class c2;

class c1{
    int val;
    friend void exchange(c1 &, c2 &);
    public:
      void indata(int a){
        val = a;
      }
      void display(void){
        cout<<val<<endl;
      }
};

class c2{
    int val2;
    friend void exchange(c1 &, c2 &);
    public:
      void indata(int a){
        val2 = a;
      }
      void display(void){
        cout<<val2<<endl;
      }
};
/*
trick to swap 2 number
temp = a;
a = b;
b = temp;
*/

void exchange(c1 &x, c2 &y){
     int temp = x.val;
     x.val= y.val2;
     y.val2 = temp;
}

int main(){
    c1 oc1;
    c2 oc2;
    oc1.indata(34);
    oc2.indata(67);
    exchange(oc1, oc2);

    cout<<"the value of c1 after exchanging becomes :";
    oc1.display();
     cout<<"the value of c2 after exchanging becomes :";
    oc2.display();
 return 0;
}