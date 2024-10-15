// comparator function..........define sorting algorithm
#include<bits/stdc++.h>
using namespace std;
bool should_i_swap(int a, int b) // this is a comparator function
{
    if(a>b)return true;
    return false;
}
int main(){
int n;
cin>>n;
vector<int> v(n);
for (int i = 0; i < n; i++)
{
   cin>>v[i];
}
for (int i = 0; i < n; i++)
{
    for (int j = i+1; j < n; j++)
    {
        // if(v[i] > v[j])
        if(should_i_swap(v[i],v[j]))
        {
            swap(v[i] ,v[j]);
        }
    }
    
}
for (int i = 0; i < n; i++)
{
    cout<<v[i]<<" ";
}

cout<<endl;
}