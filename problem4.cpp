#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int count =0;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
       int n,m,k;
       cin>>n>>m>>k;
       int b[n],c[m];
       for (int p = 0; p < n; p++)
       {
            cin>>b[p];
       }
       for (int j = 0; j < m; j++)
       {
            cin>>c[j];
       }
       for (int a = 0; a < n; a++)
       {
            for (int q = 0; q < m; q++)
            {
                if((b[a]+c[q])<=k){
                    count++;
                }
            }
            
       }
       cout<<count<<endl;
       count =0;
       

    }
    
}