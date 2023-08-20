#include<iostream>

using namespace std;
switch(op){
double power(double base , double pow){
   int result=1.0;
   for (int i = 0; i < pow; i++)
   {
    result=result*base;
   }
   return result;
}
int factorial(int n){
    if (n<=1)
    {
        return 1;
    }else{
        return n*factorial(n-1);
    }
    
}
double sine(double x,int term){
    double result=0.0;
   for (int n = 0; n < term; n++)
   {
     double value=(power(-1,n)*power(x,2*n+1))/factorial(2*n+1);
     result += value;
   }
   return result;
}
}
int main(){
    char op;
    double angle;
    int term;
    cout<<"choose the operator: ";
    cin>>op;
    cout<<"enter the angle in radians: ";
    cin>>angle;
    cout<<"enter number the term: ";
    cin>>term;
    
    double sineValue=sine(angle,term);
    cout<<"sin( "<<angle<<")"<<sineValue;
}
