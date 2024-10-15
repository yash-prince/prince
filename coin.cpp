#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        int count=0;
        string s;
        cin>>s;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]=='U'){
                count++;
            }
        }
        if(count%2==1){
            cout<<"yes"<<endl;
        }else if(count%2==0){
            cout<<"no"<<endl;
        }
        
    }
}