#include<iostream>
using namespace std;
class simple{
    int a,b;
    public:
    simple(int x,int y=6)//value of y is default value
    {
        a=x;
        b=y;
    }
    void printnumber();
};
void simple::printnumber(){
    cout<<"the value of data is "<<a<<" and "<<b;
}
int main(){
    simple s(2,3);
    s.printnumber();
    return 0;
}