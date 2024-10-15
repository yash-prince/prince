#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int s1 =0 ,s2 = 0;
        int a1,a2,b1,b2;
        cin>>a1>>a2>>b1>>b2;
        if(a1>b1 && a2>b2){
            s1++;
        }else if(a1<b1 && a2 < b2){
            s2++;
        }
        if(a1>b2 && a2>b1){
            s1++;
        }else  if(a1<b2 && a2 < b1){
            s2++;
        }

        if(s1 > s2){
            cout<<(s1* 2);
        }else{
            cout<<0;
        }
        cout<<endl;
        
    }
}