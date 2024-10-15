#include <bits/stdc++.h>
using namespace std;
void print_vec(vector<int> &v, vector<int> &v1, bool freq[])
{
    if(v1.size()==v.size()){
        for (int i = 0; i < v1.size(); i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<endl;  
        return;
    } 
    for (int i = 0; i < v.size(); i++)
    {
       if(freq[i]!=1){
        v1.push_back(v[i]);
        freq[i]=1;
        print_vec(v,v1,freq);
        freq[i]=0;
        v1.pop_back();
       }
    }  
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> v1;
    bool freq[n];
    for (int i = 0; i < n; i++)
    {
       freq[i]=0;
    }
    
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    print_vec(v,v1,freq);
}