#include<iostream>
using namespace std;
bool check(string s){
    for (int i = 0; i <s.length(); i++)
    {
        if(s[i]=='N'){
            return true;
        }
    }
    return false;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(check(s)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}