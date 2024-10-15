#include<bits/stdc++.h>
using namespace std;
double eps=1e-6;
double multiply(double a,int b)
{
    double c=1.0;
    for (int i = 0; i < b; i++)
    {
        c=c*a;
    }
    return c;
    
}
int main(){
    int n;
    double sq_rt;
    cin>>n>>sq_rt;
    double low=1;
    double high=sq_rt;
    
    while(high-low > eps){
        double mid=(low+high)/2;
        if(multiply(mid,n)>sq_rt){
            high=mid;
        }else{
            low=mid;
        }
    }
    cout<<low<<" "<<high<<" ";
}