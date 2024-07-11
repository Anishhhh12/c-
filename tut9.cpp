#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"the age group is"<<endl;
    cin>>age;
    // if ((age<18) && (age>1))
    // {
    //     cout<<"you are not allowed to party.";
    // }
    // else if (age == 18)
    // {
    //     cout<<"you are allowed to a party with child pass";
    // }
    // else if (age < 1)
    // {
    //     cout<<"you are not born yet";
    // }
    
    // else{
    //     cout<<"you are welcome";
    // }
    switch (age)
    {
    case 22:
        cout<<"the age is 22";
        break;
    case 18:
        cout<<"the age is 18";
        break;
    default:
        cout<<"you are no one";
        break;
    }
    
    return 0;
}