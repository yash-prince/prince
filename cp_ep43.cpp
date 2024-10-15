#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
long long n;
long long m;
long long a[N];
bool rtf(long long h)
{
    long long wood=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>=h){
            wood +=(a[i]-h);
        }
    }
    return wood>=m;
    
}
int main(){
    cin>>n>>m;
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    long long lo=0,hi=1e9,mid;
    while((hi-lo)>1){
        mid=(lo+hi)/2;
        if(rtf(mid)){
            lo=mid;
        }else{
            hi=mid-1;
        }
    }
    if(rtf(hi)){
        cout<<hi;
    }else {
        cout<<lo;
    }
}