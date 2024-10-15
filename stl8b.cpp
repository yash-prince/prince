#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<string> s;//o(1)
    int n;
    cin>>n;
    int q;
    string s1;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin>>str;
        s.insert(str);
    }
    cout<<"no of queries ";
    cin>>q;
   for (int i = 0; i < q; i++)
   {
        cout<<"string "<<endl;
        cin>>s1;
        auto it = s.find(s1);
        if(it != s.end() ){
            cout<<"yes"<<endl;
        }else {
            cout<<"no"<<endl;
        }
   }
   
    
}