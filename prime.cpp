#include<iostream>
using namespace std;
int main(){
    int a;
    int p;
    int b=2;
    int count=1;
    cout<<"enter the no of prime no u want:";
    cin>>a;
    cout<<b<<",";
    for (int  i = 3; i <i+1; i++)
    {
        for (int j = 2; j < i-1; j++)
        {
           p= i%j;
           if(p==0){
            break;
           }
        }
      if(p!=0){
            cout<<i<<",";
            count++;
        }
        if (count==a)
        {
            cout<<"these are the "<<a<<"prime numbers";
            break;
        }
    }
    
    return 0;
}
