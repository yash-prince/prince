//sorting(intro sorting){mixture of three algorithm : quick sort ,hipesort ,insertion sort}
//time complexity is n(log (n))
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    // int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>a[i];
    // }
    // sort(a+2,a+n);//from which u have to sort and till u want to sort ,like here we want to sort from 3rd element to last element
    // for (int i = 0; i < n; i++)
    // {
    //    cout<<a[i]<<" ";
    // }
    //WE CAN ALSO USE IN A VECTOR
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin()+2,v.end());
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    
    
}