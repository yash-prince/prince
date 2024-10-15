#include<iostream>
using namespace std;
int f(int n){
    if(n<=1){
        return n;
    }
   int last= f(n-1);
    int first=f(n-2);
    return last+first;
    
}
int main(){
    int n;
    cin>>n;
    cout<<f(n);
}