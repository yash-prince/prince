// -----RECURSION & RECURSIVE FUNCTIONS IN C++...........
#include <iostream>
using namespace std;

int fib(int n){
    if(n<=1){
        return 1;
    }
     return fib(n-1)+fib(n-2);
}
int factorial(int n){
    if (n<=1){
    return 1;}
return n*factorial(n-1);
}
// step by step calculation of factorial (4)
// factorial(4)=4*factorial(3)
// factorial(4)=4*3*factoria l(2)
// factorial(4)=4*3*2*factorial(1)
// factorial(4)=4*3*2*1*factorial(0)
// factorial(4)=4*3*2*1*0

int main(){
//Factorial of a number;
// 6!=6*5*4*3*2*1=720
// 0!=1;
// 1!=1;
// n!=n*(n-1)!;
int a;
cout<<"enter a number";
cin>>a;
// cout<<"the factorial of"<<a<<"is"<<factorial(a);
cout<<"the fibonacci sequence at position "<<a<<" is "<<fib(a)<<endl;
return 0;}