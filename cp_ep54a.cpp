#include<bits/stdc++.h>
using namespace std;
long long print_power(int a,int b){
    if(b == 0){
        return 1;
    }
    long long res=print_power(a,b/2);
    if(b&1){
        return a*res*res;
    }else{
        return res * res;
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<print_power(a,b);
}