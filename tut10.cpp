#include<iostream>
using namespace std;
int main()
{
    int i = 1;
    cout<<"multiplication table of 6"<<endl;
    // do
    // {
    //     cout<<6*i<<endl;
    //     i++;
    // } while (i<=10);
    for (int i = 1; i <= 10; i++)
    {
        // cout<<6*i<<endl;
        if (i == 8)
        {
            continue;
        }
        cout<<6*i<<endl;
    }
    
    
    
    return 0;
}