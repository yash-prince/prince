#include<bits/stdc++.h>
using namespace std;
void func(int n){
    if(n==0)return;
    cout<<"prince"<<endl;
    int m=--n;
    func(m);
}
int main(){
int n;
cin>>n;
func(n);
}