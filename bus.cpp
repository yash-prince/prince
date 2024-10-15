#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int happy_people=0;
        int additional=0;
        for (int i = 0; i < n; i++)
        {
            happy_people +=arr[i] - arr[i]%2;
            additional +=arr[i]%2;
        }
         int no_seats=2*k - happy_people - additional;
         int ans=min(no_seats,additional);

        cout<<happy_people +ans<<endl;
        
    }
}