#include <iostream>
using namespace std;
class Base
{
    int data1; /*private by default and is not inheritable*/
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base ::setData(void)
{
    data1 = 10;
    data2 = 20;
}

int Base ::getData1()
{
    return data1;
}

int Base ::getData2()
{
    return data2;
}
class derived : public Base
{ /*class is being derived publically*/
    int data3;

public:
    void process();
    void display();
};

void derived ::process()
{
    data3 = data2 * getData1();
}

void derived ::display()
{
    cout << "value of data 1 is" << getData1() << endl;
    cout << "value of data 2 is" << data2 << endl;
    cout << "value of data 3 is" << data3 << endl;
}

int main()
{
    derived der;
    der.setData();
    der.process();
    der.display();
    return 0;
}
// we can call public member within class of other function like we can call setData in process class if we make base class private.
// these all can happen when we made visibility mode private.
