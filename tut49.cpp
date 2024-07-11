#include<iostream>
using namespace std;

class Test{
    int b;
    int a;
    public:
    // Test(int i, int j) : a(i), b(i*j)
    // Test(int i, int j) : a(i), b(a-j)
    //  Test(int i, int j) : b(j), a(i-b) --> it creates a problem because a will be initialized first because it is written first.
    //  Test(int i, int j) : b(j), a (i-b)
    Test(int i, int j)
    {  
        a = i;
        b = j;
        cout<<"constructor executed"<<endl;
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
    }
};
int main(){
    Test T(4, 6);
    return 0;
}