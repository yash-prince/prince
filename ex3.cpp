#include<iostream>
#include<cmath>
using namespace std;
int main(){
    char op ;
    double a,b;
    double degree;
    double PI=3.1415928;
    
     cout<<"enter (+,-,*,/,^,s,c,t)";
    cin>>op;
    
    if (op=='s'||op=='c'||op=='t')
    {
        cout<<"enter the value of degree: ";
        cin>>degree; 
    double radian= degree*PI/180;
    
    switch(op)
    {case's':
        cout<<"sin("<<degree<<") = "<<sin(radian);
    break;
    case'c':
        cout<<"cos( "<<degree<<") = "<<cos(radian);
       break;
    case't':
        cout<<"tan( "<<degree<<") = "<<sin(radian)/cos(radian);
        break;
    }
    }
    else{
    cout<<"enter the value of two number";
    cin>>a;
   
    cin>>b;
    switch (op){
    case '+':
    cout<<a<<"+"<<b<<"=="<<a+b;
    break;

    case '-':
    cout<<a<<"-"<<b<<"=="<<a-b;
    break;

    case'*':
    cout<<a<<"*"<<b<<"=="<<a*b;
    break;

    case '/':
    
    if (b!=0)
    {
     cout<<a<<"/"<<b<<"=="<<a/b;   
     
    }
    else if (b==0)
    {
        cout<<"error";
    }
    break;
    
    case '^':
    cout<<a<<"^"<<b<<"=="<<pow(a,b);
    break;
    

    default:
    cout<<"invalid term";
        break;
    }
    }
}