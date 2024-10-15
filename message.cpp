#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int t;
t= (s.length()-1)/2;
bool check = false;
vector<char> v;
int k=-1;
for (int i = 1; i < (t+1); i++)
{
    int f = i;
    
    for (int j = i; j < s.length() ; j++)
    {
        
        if(s[j] != s[j-f]){
            break;
        }
         k=j;
        v.push_back(s[j]);
    }
    if(k == (s.length()-1)){
        break;
    }
    v.clear();
}
if(k == (s.length()-1)){
    cout<<"YES"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i];
    }
    cout<<endl;
}else{
    cout<<"NO"<<endl;
}


}