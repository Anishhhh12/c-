#include<iostream>
using namespace std;
class shopitem{
    int id;
    float price;
    public:
    void setData(int a,float b){
        id = a;
        price = b;
    }
    void getData(){
    cout<<"the id of item is"<<id<<endl;
    cout<<"the price of item is"<<price<<endl;
}
};


 int main(){
    int size = 2;
    // int *ptr = &size;
    // int *ptr = new int[34];
    shopitem *ptr = new shopitem[size];
    shopitem *ptrTemp = ptr;
    int p, i;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout<<"enter id and price of the item"<<i+1<<endl;
        cin>>p>>q;
        // (*ptr).setData(p, q);
        ptr->setData(p, q);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<"item number"<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    
    return 0;
 }