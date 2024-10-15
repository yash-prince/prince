#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;//if s is in a integer type.....then if we find some point of int then we have to subtract the sky value of 0
    int last_digit=s[s.size()-1]-'0';
    cout<<last_digit;
    return 0;
}