#include<iostream>
using namespace std;
int main(){
    int a = 7;
    int *b =&a;
    // cout<<"the adress of a is"<<&a<<endl;
    // cout<<"the adress of a is"<<b<<endl;

    // cout<<"the value at b is"<<*b<<endl;

    // pointer to pointer
    int**c = &b;
    cout<<"the adress of b is"<<&b<<endl;
    cout<<"the adress of b is"<<c<<endl;
    cout<<"the value of c is"<<*c<<endl;  
    cout<<"the value of c is"<<**c<<endl;  

    return 0;

}