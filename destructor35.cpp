// destructor helps in vacating the memory occupied by constructor
#include<iostream>
using namespace std;
// destructor never takes an argument or return any value.
int count = 0;

class num{
    public:
    num(){
        count++;
        cout<<"this is the time when constructor is called for object number"<<count<<endl;

    }
    ~num(){
        cout<<"this is the time when destructor is called for object number"<<count<<endl;
        count--;
    }
};
int main(){
    cout<<"we are inside our main function"<<endl;
    cout<<"creating first object n1"<<endl;
    num n1;
    {
        cout<<"entering this block"<<endl;
        cout<<"creating two more objects"<<endl;
        num n2, n3;
        cout<<"exiting this block"<<endl;
    }
    cout<<"back to our main"<<endl;
    return 0;
}