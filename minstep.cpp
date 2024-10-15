#include<bits/stdc++.h>
using namespace std;
int main(){
    int count =0;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin>>t;
        string s;
        cin>>s;
        vector<char> v(3);
        
        for (int i = 0; i < t; i++)
        {   
            v.push_back(s[i]);
            v.push_back(s[i+1]);
            v.push_back(s[i+2]);
            
            if(s[i]=='m'&&s[i+1]=='a'&&s[i+2]=='p'||s[i]=='p'&&s[i+1]=='i'&&s[i+2]=='e'){
                i=i+2;
                count++;
            }
        }
        cout<<count<<endl;
        count =0;
        
    }
}