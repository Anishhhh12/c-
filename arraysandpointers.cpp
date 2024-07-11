#include<iostream>
using namespace std;
int main(){
    int i = 0;
    int marks[] = {23, 45, 56, 67};
    int mathMarks[4];
    mathMarks[0]=456;
    mathMarks[1]=4567;
    mathMarks[2]=467;
    mathMarks[3]=4896;
    cout<<"these are math marks"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

    // you can change the value of an array
    marks[2]=412;
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"these are the marks  "<<i<<" is "<<marks[i]<<endl;
    // }
    // while (i<4)
    // {
    //     cout<<"these are the marks  "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }
    // do
    // {
    //     cout<<"these are the marks  "<<i<<" is "<<marks[i]<<endl;
    //      i++;
    // } while (i<4);
    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    // cout<<"the value of marks[0]"<<*p<<endl;
    // cout<<"the value of marks[0]"<<*(p+1)<<endl;
    // cout<<"the value of marks[0]"<<*(p+2)<<endl;
    // cout<<"the value of marks[0]"<<*(p+3)<<endl;
    
    
    

    return 0;

}