#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N];
int main(){
    int n;
    cin>>n;
    int arr[n];
    int a=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        a=a^arr[i];
    }
    cout<<a;
    
}