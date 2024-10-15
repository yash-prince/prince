#include<iostream>
using namespace std;
string check(string s,int l,int r)
{
    if(s[l]!=s[r]){
        return "no";
    }
    if(l>=r){
        return"yes";
    }
   return check(s,l+1,r-1);
}
int main(){
    string s;
    cin>>s;
    int n;
    cin>>n;
   cout<< check(s,0,n-1);
   
  }