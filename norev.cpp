#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enteer the  no:";
    cin>>a;
    cout<<"the no after reverse is:";
    for (int  i = 0; i < i+1; i++)
    {
       int j= a%10;
         cout<<j;
         a=(a-j)/10;
         if(a==0){
          break;
         }
    }

}