#include<iostream>
using namespace std;

int main(){
    int a = 3;
    int* ptr = &a;
    *ptr = 999;
    cout<<"the value of a is "<<*(ptr)<<endl;

    // new keyword
    // int* p = new int(50);
    float* p = new float(50.78);
    cout<<"the value at address p is "<<*(p)<<endl;
    int* arr = new int[3];
    arr[0] = 10;
    *(arr+1) = 20;
    arr[2] = 30;
    // delete [] arr;
    cout<<"the value of arr[0] is "<<arr[0]<<endl;
    cout<<"the value of arr[1] is "<<arr[1]<<endl;
    cout<<"the value of arr[2] is "<<arr[2]<<endl;
  
    // delete opeartor

    return 0;
}