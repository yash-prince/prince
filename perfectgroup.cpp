#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==(b+c)||b==(a+c)||c==(a+b)){
            cout<<"yes";
        }else{
            cout<<"no";
        }
        cout<<endl;
    }
    
}