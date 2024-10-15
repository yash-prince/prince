#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
   
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[7];
        string s;
        cin>>s;
        for (int i = 0; i < 7; i++)
        {
           arr[i]=0;
        }
        
        for (int i = 0; i < n; i++)
        {
            arr[s[i]-'A']++;
        }
        int ct=0;
        for (int i = 0; i < 7; i++)
        {
            if(arr[i]>=m){
                continue;
            }else{
                ct +=abs(arr[i]-m);
            }
        }
        cout<<ct<<endl;
    }
}