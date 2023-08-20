// there are two types of header files
// 1.system header files:it comes with the compiler.
#include <iostream>
//2.user defined header files:it is written by the programmer.
//#include"this.h" // this will produce an error if this.h file is not present in the current directory.

using namespace std;
int main(){
    cout<<"operators in c++"<<endl;
    cout<< "following types of operators in c++"<<endl;
    // Arithmatic operators
    int a=4,b=5;
    cout<<"the value of a+b"<<a+b<<endl;
    cout<<"the value of a-b"<<a-b<<endl;
    cout<<"the value of a*b"<<a*b<<endl;
    cout<<"the value of a/b"<<a/b<<endl;
    cout<<"the value of a%b"<<a%b<<endl;
    cout<<"the value of a++"<<a++<<endl;
    cout<<"the value of a--"<<a--<<endl;
    cout<<"the value of ++a"<<++a<<endl;
    cout<<"the value of --a"<<--a<<endl;
    cout<<endl;

  //  Assignment operators--used to assign value to variables   
  // int a=4,b=5;
  // char d='d';
  
  // comparison operators
      cout<<"following are the comparison operators in c++"<<endl;
          cout<<"the value of a==b is"<<(a==b)<<endl;
  cout<<"the value of a+b"<<a+b<<endl;
    cout<<"the value of a!=b"<<(a!=b)<<endl;
    cout<<"the value of a>=b"<<(a>=b)<<endl;
    cout<<"the value of a<=b"<<(a<=b)<<endl;
    cout<<"the value of a>b"<<(a>b)<<endl;
    cout<<"the value of a<b"<<(a<b)<<endl;
    
    // logical operaors
    cout<<"the following are the logical operator in c++"<<endl;
    cout<<"the value of logical and operator ((a=b)&(a<b))is "<<((a=b)&(a<b))<<endl;
     cout<<"the value of logical or operator ((a=b)||(a<b))is "<<((a=b)||(a<b))<<endl;
 cout<<"the value of logical not operator (!(a==b))is "<<(!(a==b))<<endl;
 
}