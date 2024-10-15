#include<bits/stdc++.h>
using namespace std;
const int con=2e5 +10;
int arr[con];
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ct_zero=0;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]=='0'){
                ct_zero++;
                arr[i]=ct_zero;
            }else{
                arr[i]=ct_zero;
            }
        }
        
        
    }
}