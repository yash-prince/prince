#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ct=0;
        while(n>0){
            if(n / 4 >= 1){
                ct +=n/4;
                n = n%4;
            }else{
                ct +=n/2;
                n =n%2;
            }
            
        }
        cout<<ct<<endl;
    }
}