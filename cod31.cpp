//constructor overloading.....
#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(int x,int y){
        a=x;
        b=y;
    }
    complex(int x){
        a=x;
        b=0;
    }
    void printnumber(){
        cout<<"the number is"<<a<<"+ i"<<b<<endl;
    }
};
int main(){
complex c1(4,6);
c1.printnumber();
complex c2(3);
c2.printnumber();
}