#include<iostream>
using namespace std;
int main(){
    int ar[4];
    ar[0]=1;
    int a,b;
    cin>>a>>b;
    ar[a]=1;
    ar[b]=1;
    for (int  i = 0; i < 4; i++)
    {
        if(ar[i]!=1){
            cout<<i<<endl;
        }
    }
    
}