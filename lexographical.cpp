#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ,a;
    vector<string>v;
    map<string,int> m;
    cout<<"how many string u want to comparre "<<endl;
    cin>>n;
    for (int  i = 0; i < n; i++)
    {   
        a=1;
        int b;
        string s;
        cin>>s;
        v.push_back(s);
       for (int j  = 0; j < i; j++)
       {
             if(v[i]==v[j]){
                a++;
            }
       }
       b=a;
       m.insert({s,a});
       
    }
    for(auto it : m){
        cout<<it.first<<" "<<it.second<<endl;
    }
    
    return 0;
}