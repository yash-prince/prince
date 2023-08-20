#include<iostream>

using namespace std;
double power(double base , double pow){
   int result=1;
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
    double result;
   for (int n = 0; n < term; n++)
   {
     double value=(power(-1,n)*power(x,2*n+1))/factorial(2*n+1);
     result = + value;
   }
   return result;
}

int main(){
    double x;
    int term;
    cout<<"enter the angle: ";
    cin>>x;
    cout<<"enter number the term: ";
    cin>>term;

    cout<<"sin( "<<x<<")"<<sine(x,term);
    
}