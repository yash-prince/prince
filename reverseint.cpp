#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int  i = 0; i < t; i++)
    {
        int n;
        cin>>n;
       while(n%10==0){
        cout<<"";
        n=n/10;
       }
       while(n>0){
        int k =n%10;
        cout<<k;
        n=n/10;
       }
        cout<<endl;
    }
    
    return 0;
}