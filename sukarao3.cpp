#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        vector<int> add_el;
        int copy_l=l;
        int add_no=0;
        while(copy_l<=r){
            add_el.push_back(copy_l);
            add_no +=1;
            copy_l +=add_no;
        }
        int size=add_el.size();
        cout<<size<<endl;
    }
}