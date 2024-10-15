// VECTOR and push back functiion
// #include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int>v){
    cout<<"size of the vector is: "<<v.size()<<endl;
    cout<<"the element in vector is ";
    for (int i = 0; i < v.size(); i++)
    {
        // time complexity of v.size is 0(1)
        cout<<v[i]<<" ";
    }
    
}
int main(){
   vector<int> v;
    int n;
    cout<<"the number of element u want to stored: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    printVec(v);
}