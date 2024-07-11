#include<iostream>
using namespace std;

// call by reference variable using pointers
void swapPointer(int* a, int* b){ 
    int temp = *a;
    *a = *b;
    *b = temp;
}
// call by refrence c++ refrence variable
// void swapRefrenceVar(int &a, int &b){ 
//     int temp = a;
//     a = b;
//     b = temp;
// }
// refrence by return
int & swapRefrenceVar(int &a, int &b){ 
    int temp = a;
    a = b;
    b = temp;
    return a;
}
int main(){
    int x =4,  y = 5;
    cout<<"the value of x is "<<x<<"the value of y is "<<y<<endl;
    //  swap(x,y)will not swap numbers
    //  swapPointer(&x,&y);   this will  swap using pointers
    swapRefrenceVar(x, y) = 766; 
    cout<<"the value of x is "<<x<<"the value of y is "<<y<<endl;
    return 0;
}