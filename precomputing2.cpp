#include<bits/stdc++.h>
using namespace std;
int count(int x,int a[],int m){
int ct=0;
for (int i = 0; i <m; i++)
{
    if(a[i]==x){
        ct++;
    }
}
return ct;

}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int q;
    cin>>q;
    while(q--){
        int b;
        cin>>b;
        cout<<count(b,a,n);
    }

}