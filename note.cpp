#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char a[n][4];
        vector<int> put;
        for (int i = 0; i < n; i++)
        {
           for (int j = 0; j < 4; j++)
           {
             cin>>a[i][j];
           }
           
        }
        for (int i = n-1; i >=0; i--)
        {
            for (int j = 0; j < 4; j++)
            {
                if(a[i][j]== '#'){
                    put.push_back(j+1);
                }
            }
            
        }
        for (int i = 0; i < put.size(); i++)
        {
            cout<<put[i]<<" ";
        }
        cout<<endl;
        put.clear();
        
    }
}