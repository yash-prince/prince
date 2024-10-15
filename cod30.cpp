//parameterized and default constructors
#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(int ,int);
    void printnumber(){
        cout<<"the complex number is: "<<a<<"+"<<b<<"i"<<endl;
    }
};
complex::complex(int x,int y)//this is a parameterized constructor as it takes  parameters
{
    a=x;
    b=y;
}
int main(){
    //implicit call
    complex a(4,6);
    //explicit calll
    complex b=complex(5,7);
    a.printnumber();
    b.printnumber();
    return 0;
}