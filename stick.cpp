#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2 != 0){
        cout<<0;
    }
    if(n%2 ==0 && (n/2)%2==0 ){
        cout<<(((n/2)/2)-1);
    }else if(n%2 ==0 && (n/2)%2!=0){
        cout<<((n/2)/2);
    }
    return 0;
}