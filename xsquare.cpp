#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a[26];
        for (int k = 0; k < 26; k++)
        {
            a[k]=0;
        }
         
        for (int i = 0; i < s.size(); i++)
        {
            a[s[i]-'a']++;
        }
        int f=0;
        for (int j = 0; j < 26; j++)
        {
            if(a[j]>1){
                f=1;
                break;
            }
        }
        if(f==1){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }  
    }
}