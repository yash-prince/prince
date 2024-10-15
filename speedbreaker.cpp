#include<bits/stdc++.h>
using namespace std;
bool with_in_time(vector<int> &v ,int n){
        int i=0;
        int cpy_time=i;
        while(true){
            if(v[cpy_time] >= i + 1){
                cpy_time++;
                continue;
            }else{
                i +=1;

            }
        }
        
    }
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>tym_con(n);
        for (int i = 0; i < n; i++)
        {
           cin>>tym_con[i];
        }
        
    }
}