//constructor
#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
    // creating a constructor
    // constructor is a special member function with the same name as of the class .
    // it is used to initialize the object of its class 
    // it is automatically invoked whenever an object is created
    complex(void);//constructor declared
    void printnumber(){
        cout<<"your no is "<<a<<"+"<<b<<"i"<<endl;
    }
};
complex::complex(void)//this is a default constructor as it accepts no parameter
{
    cout<<"enter the real part of complex number: ";
    cin>>a;
    cout<<"enter the imag part of that complex number:";
    cin>>b;
}
int main(){
complex c;
c.printnumber();
    return 0;
}
//properties of constructor  
/*1.it should be declared in the public section of the class
2.they are automatically invoked whenever the object is created
3.they cannot return the values and do not have return type
4.it can have defaut arguments
5.we cannot refer to their address
*/