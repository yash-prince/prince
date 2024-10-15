#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the two numbers: "<<endl;
    cin>>a>>b;
    if (a>b && a>0 && b>0)
    {
        for (int i = a; i >0 ; i--)
        {
            if(a%i==0 && b%i==0){
                cout<<"HCF of the given no is: "<<i;
                break;
            }
        }
        
        
    }
    if (b>a && a>0 && b>0)
    {
        for (int i = b; i >0 ; i--)
        {
            if(a%i==0 && b%i==0){
                cout<<"HCF of the given no is: "<<i;
                break;
            }
        }
        
        
    }
    if(a<0 || b<0){
        cout<<"please enter the positive number "<<endl;
        
    }
    
    return 0;
}