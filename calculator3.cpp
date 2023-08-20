#include<iostream>

using namespace std;


double power(double base , double exponent){
   int result=1.0;
   for (int i = 0; i < exponent; i++)
   {
    result=result*base;
   }
   return result;
}
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
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
double cos(double x,int term){
    double result=0.0;
   for (int n = 0; n < term; n++)

   {
     double value=(power(-1,n)*power(x,2*n))/factorial(2*n);
     result += value;
   }
   return result;
}


int main(){
   char op;
    double angle;
    int term;
    cout<<"choose the op(+,-,*,/,^,s,c,t)";
    cin>>op;
    // cout<<"enter the angle in radians: ";
    // cin>>angle;
    // cout<<"enter number the term: ";
    // cin>>term;
    // if (term<=0)
    // {
    //     cout<<"enter the positive term: ";
    //     return 1;
    // }
    
    
    double sineValue=sine(angle,term);
    // cout<<"sin( "<<angle<<")"<<sineValue;
    double cosValue=cos(angle,term);
    // cout<<"cos( "<<angle<<")"<<cosValue;


switch (op)
{
case 's':
cout<<"enter the angle in radians: ";
    cin>>angle;
    cout<<"enter number the term: ";
    cin>>term;
    if (term<=0)
    {
        cout<<"enter the positive term: ";
        return 1;
    }
    // double sineValue=sine(angle,term);
    cout<<"sin( "<<angle<<")"<<sineValue;
    break;

case'c':
    cout<<"enter the angle in radians: ";
    cin>>angle;
    cout<<"enter number the term: ";
    cin>>term;
    if (term<=0)
    {
        cout<<"enter the positive term: ";
        return 1;
    }
    // double cosValue=cos(angle,term);
    cout<<"cos( "<<angle<<")"<<cosValue;
default:
    break;
}
}