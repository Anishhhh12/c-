#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream hout("sample60.txt");
    cout<<"enter your name";
    string name;
    cin>>name;
    // writing string to the file
    hout<<"my name is " + name;

    hout.close();
// reading a string
    ifstream hin("sample60.txt");
    string content;
    hin>>content;
    cout<<"the content of this file is: "<<content;
    hin.close();
    return 0;
}