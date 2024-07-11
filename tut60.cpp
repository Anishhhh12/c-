#include<iostream>
#include<fstream>

// the useful classes for working with files in c++ are:
// 1.fstreambase
// 2.ifstream --> derived from fstreambase
// 3.ofstream --> derived from fstreambase

using namespace std;
int main(){
    string st = "anish";
    string st2;
    // opening file using constructor
    // ofstream out("sample.txt");
    // out<<st;
    ifstream in("sample60b.txt"); /*read operation*/
    // in>>st2;
    getline(in, st2);
    cout<<st2;

    return 0;
}