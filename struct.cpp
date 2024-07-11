#include<iostream>
using namespace std;

typedef struct employee
{
    int eid;
    char favChar;
    float salary;
}ep;

union money
{
    int rice;/*4*/
    char car;/*1*/
    float pounds;/*4*/
};

int main(){
    enum Meal{breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<(m1 == 2);
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;

    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.car;     "union mai memory share hota hai to ek baar mai ek hi print hoga"
    // ep harry;
    // harry.eid = 1;
    // harry.favChar = 'c';
    // harry.salary = 1200900;
    // cout<<"the value is "<<harry.eid<<endl;
    // cout<<"the value is "<<harry.favChar<<endl;
    // cout<<"the value is "<<harry.salary<<endl;
    return 0;

}
