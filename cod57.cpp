#include<iostream>
using namespace std;
class CWH{
    protected:
string title;
float rating;
public:
CWH(string s ,float r){
    title = s;
    rating =r;
}
virtual void display(){}
};
class CWHvideo : public CWH{
    float videolength;
    public:
    CWHvideo(string t,float v, float b):CWH(t,v){
        videolength =b;
    }
    void display(){
        cout<<"title of the video: "<<title<<endl;
        cout<<"videolength of the video: "<<videolength<<" minute"<<endl;
        cout<<"rating of the video tutorial: "<<rating<<endl;
    }
    
};
int main(){
    float v=4,rt=9.8;
    string t="djtutorial";
    CWHvideo cvd(t,rt,v);
    CWH *harrypointer;
    harrypointer =& cvd;
    (*harrypointer).display();
    return 0;
}