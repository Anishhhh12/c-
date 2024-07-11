#include <iostream>
#include <vector>

using namespace std;

template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout<<v.at(i)<< " ";
    }
    cout << endl;
}
int main()
{
    // ways to create a vector
    vector<int> vec1;        /*zero length integer vector*/
    vector<char> vec2(4);    /*4 element character vector*/
    vector<char> vec3(vec2); /*4 element chracter vector from vec2*/
    vector<int> vec4(4, 23);  /*6 element vector of 3s*/
    int element, size = 5;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"enter an element to add to this vector";
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter, 566);
    // vec2.push_back('5');
    // display(vec2);
    display(vec4);
    cout<<vec4.size();


    return 0;
}