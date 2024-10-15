// comparator function for a pair
#include<bits/stdc++.h>
using namespace std;
bool should_i_swap(pair<int,int> a,pair<int,int> b){
    if(a.first != b.first){
        // if(a.first>b.first)return true;
        // return false;
        // if(a.first>b.first)return false;
        // return true;
        return a.first<b.first;//jis v order me chaiye usme return kr dena h
    }else{
        // if(a.second<b.second)return true;
        // return false;
       return a.second>b.second;
    }
}
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    for(int i = 0 ; i < n ;i++){
        cin>>a[i].first>>a[i].second;
    }
    // for (int i = 0; i < n; i++)
    // {
    //    for (int j = 0; j < n; j++)
    //    {
    //         if(should_i_swap(a[i],a[j])){
    //             swap(a[i],a[j]);
    //         }
    //    }

       
    // }
    sort(a.begin(),a.end(),should_i_swap);
    // greater<pair<int,int>> is a inbuilt comparatorx
    for (int i = 0; i < n; i++)
    {
        cout<<a[i].first<<" "<<a[i].second<<" ";
    }
    cout<<endl;
    
}