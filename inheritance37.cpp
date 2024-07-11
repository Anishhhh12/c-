#include<iostream>
using namespace std;

// base class
class Employee{
    public:
    int id;
    float salary;
    
    Employee(int inpId){
            id = inpId;
            salary = 34.0;
        }
        Employee(){}
    };

 //Derived class syntax
 /*
 class{{derived-class-name}} : {{visibility mode}} {{base-class-name}}
 {
    class members/methods/etc...
 }
 note:
 1.Default visibility mode is private.
 2.public visibility Mode: public members of the base class becomes public members of derived class.
 3.private visibility Mode: public members of the base class becomes private members of derived class.
 4.private members are never inherited
 */ 

// creating a programmer class derived from employee base class
class programmer :public Employee{
    public:
    programmer(int inpId){
        id =inpId;
    }
    int languagecode = 9;
    void getdata(){
        cout<<id<<endl;
    }
};
int main(){
    Employee harry(1), rohan(2);
    cout<<harry.salary<<endl; 
    cout<<rohan.salary<<endl;
    programmer skillF(10);
    cout<<skillF.languagecode<<endl;
    cout<<skillF.id<<endl;
    skillF.getdata();
    return 0;
}