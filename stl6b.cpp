#include<bits/stdc++.h>
using namespace std;
int main(){
    // map<string,string> m;
    // m["saeew"]= "efwefw"; // time complexity s.size() * log (n) due to comparision with other string
    map<string,int> m;
int n;
cout<<" no of string in a map u want to stored: ";
cin>>n;
cout<<" enter the all string: ";
for(int i =0 ;i <n; i++){
    string s;
    cin>>s;
    m[s]++;
}
for(auto pr :m){
    cout<<pr.first<<" "<<pr.second<<endl;
}
}