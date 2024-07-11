#include<iostream>
#include<cstring>
using namespace std;

class CWH{
    protected:
    string title;
    float rating;
    public:
      CWH(string s, float r){
        title = s;
        rating = r;
      }
      virtual void display(){}
};
class CWHVideo : public CWH
{
    float videolength;
    public:
      CWHVideo(string s,float r,float vl): CWH(s, r){
        videolength = vl;
      }
      void display(){
        cout<<"this is amazing video with title"<<title<<endl;
        cout<<"rating"<<rating<<endl;
        cout<<"lenth of video"<<videolength<<endl;
      }
};

class CWHtext : public CWH
{
    int words;
    public:
      CWHtext(string s,float r,int wc): CWH(s, r){
        words = wc;
      }
      void display(){
        cout<<"this is amazing video with title "<<title<<endl;
        cout<<"rating"<<rating<<endl;
        cout<<"lenth of words"<<words<<endl;
      }
};

int main(){
    string title;
    float rating, vlen;
    int words;

    title = "django tutorial";
    vlen = 4.45;
    rating = 4.5;
    CWHVideo djvideo(title,rating,vlen);
    // djvideo.display();

    title = "Django tutorial textual";
    words  = 433;
    rating = 4.5;
    CWHtext djtext(title,rating,words);
    // djtext.display();

    CWH * tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}

// rules for virtual functions
// 1. they cannot be static
// 2.they are accessed by object pointers
// 3.virtual functions can be a friend of another class
// 4.a virtual function in base class might not be used.
// 5.if a virtual function defined in a derived class there is no necccesity of redefining it in the derived class.