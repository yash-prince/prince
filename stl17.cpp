#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
       cin>>v[i];
    }
    int min = *min_element(v.begin(), v.end());
    cout<<min<<endl;
    int max = *max_element(v.begin(),v.end());
    cout<<max<<endl;
    int sum = accumulate(v.begin(), v.end(), 0);
    cout<<sum;
    int ct =count(v.begin(),v.end(),2);
    cout<<ct<<endl;
    // int element = *find(v.begin(),v.end(),2);
    // cout<<element;
    auto it = find(v.begin(), v.end(),2);
    if(it!= v.end()){
        cout<<(*it);
    }else cout<<"element not found ";
    reverse(v.begin(),v.end());//this function is used to reverse the array or vector
    for(auto val : v){
        cout<<val<<" ";
    }
    string s =" sfoihdguuihr ";
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    
}