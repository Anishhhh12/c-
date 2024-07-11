#include<iostream>
using namespace std;
int sum(int a, int b){
   int c= a +b;
    return c;
}
void g(){
    cout<<"Hello , Good morning";
}
int main(){
    int num1 ,num2;
   cout<<"enter num1"<<endl;
   cin>>num1;
   cout<<"enter num2"<<endl;
   cin>>num2;
   cout<<sum(num1,num2);
   g();
   return 0;
}
