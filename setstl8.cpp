#include<bits/stdc++.h>
using namespace std;
void print(multiset<string> &s){
    for(string value : s) 
    {
        cout<<value<<endl;
    
    }
    for(auto it =s.begin(); it!= s.end(); ++it){
        cout<<(*it)<<endl;
    }
}
int main(){
    // set<string> s;
    // s.insert("abc");//log(n)
    // s.insert("scd");
    // s.insert("bcd");
    // auto it = s.find("abc");
    // if(it!= s.end()){
    //     // cout<<(*it)<<endl;
    //     s.erase(it);
    // }
    multiset<string> s;
    // in multiset multiple value is allowed
    // like ex here abc string is present two times
    s.insert("abc");//o(log(n))
    s.insert("scd");
    s.insert("bcd");
    s.insert("abc");
    // if we passes the iterator  in (s.erase) then it will delete the only first of the value (those the iterator pointed)
    //example
    auto it = s.find("abc");// o (log(n))
    if(it!= s.end()){
        s.erase(it);
    }
    // but we passes the direct value in s.erase then it will remove all the corresponding value present in a set lets take example
    s.erase("abc");
    print(s);
}