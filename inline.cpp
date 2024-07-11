#include<iostream>
using namespace std;
// int product(int a, int b){
//     return a*b;
// }
float moneyRecieved(int currentmoney, float factor = 1.10){
      return currentmoney * factor;
}
int main(){
    // int a,b;
    int money = 100000;
    // cout<<"enter the value of a and b";
    // cin>>a>>b;
    // cout<<"the produvt of a and b"<<product(a,b)<<endl;
    // cout<<"the produvt of a and b"<<product(a,b)<<endl;
    // cout<<"the produvt of a and b"<<product(a,b)<<endl;
    // cout<<"the produvt of a and b"<<product(a,b)<<endl;
    // cout<<"the produvt of a and b"<<product(a,b)<<endl;
    cout<<"the money we give "<<money<<" the money we get "<<moneyRecieved(money);
    return 0;

}