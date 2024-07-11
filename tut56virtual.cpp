#include<iostream>
using namespace std;

class Baseclass{
        public:
        int var_base = 1;
        virtual void display(){
            cout<<"1 displaying base class variables"<<var_base<<endl;
        }
};

class Derivedclass : public Baseclass{
    public:
    int var_derived = 2;
    void display(){
        cout<<"2 displaying base class variables"<<var_base<<endl;
        cout<<"2 displaying derived class variables"<<var_derived<<endl;
    }
};
int main(){
    Baseclass * base_class_pointer;
    Baseclass obj_base;
    Derivedclass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->display();
    return 0;
}