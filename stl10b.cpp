#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,multiset<string>> m;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string s1;
        int q;
        cin>>s1>>q;
        m[{q}].insert(s1);

    }
    // tried by me
    for(auto &it : m){
        auto &student_marks=it.first;
        auto &student_name=it.second;
        for (auto &sec : student_name){
            cout<<sec <<" ";
        }
       cout<<it.first <<endl;
    }

    auto curr_it=--m.end();
    while(true){
        auto &students = (*curr_it).second;
        auto &marks = (*curr_it).first;
        for(auto student : students){
         cout<<student<<" "<<marks;   
        }
        if(curr_it == m.begin())
        break;
        curr_it--;
    }
}