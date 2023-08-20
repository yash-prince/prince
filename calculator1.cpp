#include<iostream>
#include<cmath>
using namespace std;
int main(){
    char op ;
    double a,b;
    
     cout<<"enter (+,-,*,/,^)";
    cin>>op;
    
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
