#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        int b;
        cin>>a>>b;
        int c = (a+b)/2;
        cout<<(c-a)+(b-c);
        cout<<endl;
    }
}