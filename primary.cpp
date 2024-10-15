#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int copy_n=n;
        vector<int> check;
        while(copy_n > 0){
            int rem = copy_n % 10;
            check.push_back(rem);
            copy_n /=10;
        }
        int size = check.size();
        if(check[size - 1] == 1 && check[size-2]==0 ){
            if(size >= 4 && check[size - 3] >  0 ){
            cout<<"YES"<<endl;
            }else if(size == 3 &&  check[size - 3]>1){
                cout<<"yes"<<endl;
            }else{
                cout<<"no"<<endl;
            }
            
        }else{
            cout<<"no"<<endl;
        }
        
    }
}