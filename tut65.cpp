#include<iostream>
using namespace std;
/*
class template with multiple parameters
template<class T1, class T2>
class nameofclass{
    // body
}
*/
template<class T1, class T2>
class myclass{
    public:
    T1 data1;
    T2 data2;
    myclass(T1 a,T2 b){
        data1 = a;
        data2 = b;
    }
     void display(){
        cout<<this->data1<<this->data2;
     }
};
int main(){
    myclass<float, char> obj(1.9 , 'c');
    obj.display();
}