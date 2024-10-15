#include<bits/stdc++.h>
using namespace std;
int main(){
    int count =0;
    int n;
    cin>>n;
    for (int i = 2; i <= n-1; i++)
    {
        if(n%i == 0){
            cout<<"not prime number ";
            count++;
            break;
        }
      
    }
    if(count == 0){
        cout<<"prime";
    }
    
}