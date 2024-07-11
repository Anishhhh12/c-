#include<iostream>
using namespace std;
class Base{
    protected:  /*we want a to be private but want to derive so we can use protected*/
     int a;
    private:
     int b; 
};
/*
for a protected member:
                  Public derivation   private derivation    protected derivatio
1. private members    not inherited     not inherited          not inherited
 2. protected members  protected        private                protected
 3. public members     public           private                protected
*/
class derived : protected Base{
        
};

int main(){
    Base b;
    derived d;
    // cout<<d.a;will not work since a is protected in both base as well as derived class
    return 0;
}