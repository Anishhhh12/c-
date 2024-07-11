#include<iostream>
using namespace std;
// volume of cylinder
int volume(double r, int h){
    return (3.14*r*r*h);
}
// volume of cube
int volume (int a){
    return (a*a*a);
}
// area of rectangle
int volume (int l, int b, int h){
    return(l*b*h);
}
// int sum (int a, int b){
//     return a+b;
// }
// int sum(int a,int b,int c){
//     return a+b+c;
// }
int main(){
    // cout<<"sum of 5 and 6 is "<<sum(5,6)<<endl;
    // cout<<"sum of 5 , 9and 6 is "<<sum(5,9,6)<<endl;
    cout<<"volume of cylinder"<<volume(3,6)<<endl;
    cout<<"volume of cube"<<volume(3)<<endl;
    cout<<"volume of rectangle"<<volume(3,5,6)<<endl;

    return 0;
}
   