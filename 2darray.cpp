#include<bits/stdc++.h>
using namespace std;
// const int a[n]; u can declare size of an array of the order of 10^7
int main(){
    int n, m;
    // int a[n]; sizee of the array when we declare locally is 10^5
    cin>> n >>m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <m ; j++)
        {
            cin>>a[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<a[i][j]<<" " ;

        }
        cout<<endl;
        
    }
    
    
}