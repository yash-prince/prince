#include <iostream>
using namespace std;
int c=45;

int main(){
    // *****************build in data types****************
//     int a,b,c;
//     cout<<"enter the value of a" <<endl;
//     cin>>a;
//     cout<<"enter the value of b:"<<endl;   
//     cin>>b;
//     c=a+b;
//     cout<<"the sum is"<<c<<endl;
// cout<<"the global c is "<<::c;
// (::)is called the scope resolution operator
// if we have to used global variable in a function then we have to use this sign(::)


// float d=34.4;
// long double e=34.4;
// cout<<"the value of d is "<<d<<endl
// <<"the value of e is "<<e<<endl;
// // if we have not mention that 34.4f or 34.4l ,then c++ extension says tha 34.4 is a double
// *****************float,double,long double literals****************
float d=34.4f;
 long double e=34.4l;
// cout<<"the value of d is "<<d<<endl
// // <<"the value of e is "<<e<<endl;
// cout<<"the size f 34.4 is "<<sizeof(34.4)<<endl;
// cout<<"the size f 34.4f is "<<sizeof(34.4f)<<endl;
// cout<<"the size f 34.4F is "<<sizeof(34.4F)<<endl;
// cout<<"the size f 34.4l is "<<sizeof(34.4l)<<endl;
// cout<<"the size f 34.4L is "<<sizeof(34.4L)<<endl;

// *****************referance variable****************
// rohan das ----->monty----->rohu--->dangerous coder
float x=455,
y=x;
cout<<x<<endl<<y<<endl;

// *****************type casting****************
int a=45;
float b=45.46;
cout<<"the value ofa is  "<<(float)a<<endl;
cout<<"the value ofa is  "<<(float)(a)<<endl;
cout<<"the value ofb is  "<<(int)b<<endl;
cout<<"the value ofb is  "<<(int)(b)<<endl;
c=int(b);
cout<<"the value of c is"<<c<<endl;
cout<<"the expresion is  "<<c+a+ int (b)<<endl;
cout<<"the expresion is  "<<a+ int (b)<<endl;
}