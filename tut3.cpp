#include<iostream>
using namespace std;
int glo = 7;
void sum(){
    int a;
    cout<<glo;
}
int main()
{
    int glo = 9;
    glo = 78;
    int a = 14, b = 15;
    sum();
    cout<<glo;
    // cout<<"this is tutorial 4.Here the value of a is "<<a<<"the value of b is"<<b;
    return 0;
}