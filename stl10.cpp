#include<bits/stdc++.h>
using namespace std;
int main(){
map<pair<string,string>,vector<int>> m;
int n;
cin>>n;
for (int i = 0; i < n; i++)
{
    string str1,str2;
    cin>>str1>>str2;
    m[{str1,str2}];
    
    int k;
    cin>>k;
    m[{str1,str2}].push_back(k);
}
for(auto &it : m){
    auto &full_name = it.first;
    auto &list = it.second;
    cout<<full_name.first<<" "<<full_name.second<<endl;
    for(auto &element : list){
        cout<<element<<" "<<endl;
    }
}
}