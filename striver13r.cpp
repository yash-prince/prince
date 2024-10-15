#include<bits/stdc++.h>
using namespace std;
    void print_vec(vector<int>&v,vector<int>&v1,int freq[]){
    if(v1.size()==v.size()){
    for (int i = 0; i < v1.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;    
    }
    for (int i = 0; i < v.size(); i++)
    {
    if(freq[i]!=1){
    v1.push_back(v[i]);
    print_vec(v,v1,freq);
    i=0;
    for (int j = i+1; j < v.size(); j++)
    {
        swap(v1[i],v1[j]);
        print_vec(v,v1,freq);
    }
    }  
    }  
    }
    int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    int freq[n];
    vector<int>v1;
    for (int i = 0; i <n; i++)
    {
       freq[i]=0;
    }
    
    for (int  i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    print_vec(v,v1,freq);
}