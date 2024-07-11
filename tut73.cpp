#include<iostream>
#include<map>
#include<string>
using namespace std;

// map is an associative array
int main(){
    map<string, int> marksMap;
    marksMap["anish"] = 89;
    marksMap["bhai"] = 45;
    marksMap["ayush"] = 85;
    marksMap.insert({{"hheheh", 170}, {"mohan", 167}});
    map<string, int> :: iterator iter;
    for (iter= marksMap.begin(); iter !=marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    // *iter.first is like key and second is like value
    cout<<"the size is "<<marksMap.size()<<endl;
    cout<<"the size is "<<marksMap.max_size()<<endl;
    cout<<"the size is "<<marksMap.empty()<<endl;
    return 0;
}