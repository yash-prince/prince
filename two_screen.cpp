#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string t;
        cin>>t;
        int ct=0;
        for (int i = 0; i < min(s.length(), t.length()); i++)
        {
            if(s[i]==t[i]){
                 ct++;
            }else{break;}
        }
        int total_sec;
        int min_length=min(s.length(),t.length());
        int max_length=max(s.length(),t.length());
        if(ct > 1){
         total_sec=(min_length + 1 + (max_length -ct));
        }else{
            total_sec=s.length()+t.length();
        }
        cout<<total_sec<<endl;
        
    }
}