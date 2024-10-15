//....abstract base class and pure virtual function...
// abstract base class is a class in which ...it must contain pure virtual function
#include<iostream>
using namespace std;
class CWH{
    protected:
    string title;
    float rating;
    public:
    CWH(string s,float r){
        title =s ;
        rating =r;
    }
    virtual void display()=0
    ;//do nothing function--> pure virtual function
};
class CWHvideo: public CWH{
    float videolength;
    public:
    CWHvideo(float v,float a,string s): CWH(s,a){
        videolength= v;
    }
    void display(){
        cout<<"videolength of the video: "<<videolength<<" min"<<endl;
        cout<<"title of the video "<<title<<endl;
        cout<<"rating of the video: "<<rating<<endl;
    }
};
class CWHtext: public CWH{
   int words;
    public:
    CWHtext(int w,float a,string s): CWH(s,a){
        words=w;
    }
    void display(){
        cout<<"length of the text tutorial: "<<words<<endl;
        cout<<"title of the text "<<title<<endl;
        cout<<"rating of the text: "<<rating<<endl;
    }
};
int main(){
CWH *CWHpointer[2];
CWHvideo cvd(4,9,"harry");
CWHtext t(50,10," text tutorial");
CWHpointer[0]= &cvd;
CWHpointer[1]= &t;
(*CWHpointer[0]).display();
(*CWHpointer[1]).display();
    return 0;
}