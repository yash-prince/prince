#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        if(a == 0 && b%2 == 0){
            cout<<"YES"<<endl;
        }else if(a == 0 && b %2 != 0){
            cout<<"NO"<<endl;
        }else if(a % 2 !=0 && b == 0){
            cout<<"NO"<<endl;
        }else if(a % 2 == 0 && b== 0){
            cout<<"YES"<<endl;
        }
         if((a % 2 == 0) && (b % 2 == 0) && (a > 0 && b > 0)){
            cout<<"YES"<<endl;
        }else if((a % 2 == 0 )&& (b%2 !=0) && (a > 0 && b > 0)){
            cout<< "YES"<<endl;
        }else if((a % 2 != 0) && (b % 2 == 0) && (a > 0 && b > 0)){
            cout<<"NO"<<endl;
        }else if((a % 2 != 0) && (b % 2 != 0) && (a > 0 && b > 0)){
            cout<<"NO"<<endl;
        }
    }
}