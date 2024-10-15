#include<iostream>
using namespace std;
class number{
    int a;
    public:
    number(){
        a=0;
    }

    number(int m){
        a=m;
    }
    // when no copy constructor is found ,compiler supplies its own copy constructor
number(number &obj){
    cout<<"copy constructor called: ";
    a=obj.a;
}
    void displaynumber(){
        cout<<"the number of this oblect is"<<a<<endl;
    }
};
int main(){
number x,y,z(45),z2;
x.displaynumber();
y.displaynumber();
z.displaynumber();
number z1(x);//copy constructor invoked
z1.displaynumber();
z2=z;//copy constructor not invoked
z2.displaynumber();
number z3=z;//copy constructor invoked
z3.displaynumber();

    return 0;
}