#include<bits/stdc++.h>
using namespace std;
unordered_map<char,int> symbols ={{'{',-1},{'(',-2},{'[',-3},{'}',1},{')',2},{']',3}};
string isbalanced(string s){
    stack<char> st;
    for(char bracket :s){
        if(symbols[bracket]<0){
            st.push(bracket);
        }else{
            if(st.empty())return "no";
            char top =st.top();
            st.pop();
            if((symbols[top]+symbols[bracket])!= 0)
                return "no";
       }
  }
    if(st.empty())
        return"yes";
    else return "no";
}
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        string s1;
        cin>>s1;
       cout<< isbalanced(s1)<<endl;
    } 
}