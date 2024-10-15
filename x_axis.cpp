#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int ar[3];
        ar[0]=a , ar[1]=b,ar[2]=c;
       sort(ar,ar+3);
       cout<<abs(ar[1]-ar[0])+abs(ar[1]-ar[2])<<endl;
        
    }
}