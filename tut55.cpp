#include<iostream>
using namespace std;

class Baseclass{
        public:
        int var_base;
        void display(){
            cout<<"displaying base class variables"<<var_base<<endl;
        }
};

class Derivedclass : public Baseclass{
    public:
    int var_derived;
    void display(){
        cout<<"displaying base class variables"<<var_base<<endl;
        cout<<"displaying derived class variables"<<var_derived<<endl;
    }
};
int main(){
    Baseclass * base_class_pointer;
    Baseclass obj_base;
    Derivedclass obj_derived;
     base_class_pointer = &obj_derived;     /*poiting base class pointer to derived class*/
     base_class_pointer->var_base = 34;
     base_class_pointer->display();
    //  base_class_pointer->var_derived = 134; will throw an error
     base_class_pointer->var_base = 3400;
     base_class_pointer->display();
     Derivedclass * Derived_class_pointer;
    Derived_class_pointer = &obj_derived;
    Derived_class_pointer->var_base = 9888;
    Derived_class_pointer->var_derived = 98;
    Derived_class_pointer->display();
    return 0;
}