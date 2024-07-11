#include<iostream>
#include<cmath>
using namespace std;

class simple{
    int a;
    int b;
   public:
    void getdatasimple(){
     cin>>a;
     cin>>b;    
    }

    void operationssimple(){
        cout<<a+b<<endl;
        cout<<a-b<<endl;
        cout<<a*b<<endl;
        cout<<a/b<<endl;
    }
};

class scientificCalculator{
    int a;
    int b;
   public:
    void getdatascientificCalculator(){
     cin>>a;
     cin>>b;    
    }

    void operationsscientificCalculator(){
        cout<<cos(a)<<endl;
        cout<<sin(a)<<endl;
        cout<<exp(a)<<endl;
        cout<<tan(a)<<endl;
    }
};
 
 class hybrid : public simple, public scientificCalculator{

 };


int main(){
    hybrid c;
    c.getdatascientificCalculator();
    c.operationsscientificCalculator();
    c.getdatasimple();
    c.operationssimple();
    return 0;
}