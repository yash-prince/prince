#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int c;
        cin>>c;
        if(x>y){
            if(x % c != 0){
            int b=(x/c);
            b= 2 *b;
            cout<<(b+1)<<endl;
            }else{
            int b=(x/c);
            b= 2 *b;
            cout<<(b-1)<<endl;
            }
        }else if( y >= x){
            if(y%c != 0){
                int d=(y/c)+1;
                cout<<(2 * d)<<endl;
            }else{
                int d=(y/c);
                cout<<(2 * d)<<endl;
            }
        }
    }
}