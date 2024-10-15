#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int a = 1;
    int first_number=0;
    int sec_number =0;
    cin>>n;
    while(n>0){
        int ans=1;
        if(!(n & 1)){
            ans = ans * a;
            first_number += ans;
            sec_number +=ans; 
            n = n>>1;
        }else if (n & 1){
            ans = ans * a;
            first_number +=ans;
            n = n>>1;
        }
        a = a * 2;
    }  
    cout<<(first_number * sec_number); 
}