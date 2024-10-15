#include<bits/stdc++.h>
using namespace std;
vector<int> NGE(vector<int>v){
    vector<int> nge(v.size());
    stack<int>st;
    for(int i=0; i<v.size(); ++i){
    while(!st.empty()&& v[i]>v[st.top()]){
        nge[st.top()]= i;
        st.pop();
      }
      st.push(i);
    }
    while(!st.empty()){
        nge[st.top()]=-1;
        st.pop();
    }
    return nge;
}
int main(){
    vector<int> v;
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int k;
        cin>>k;
        v.push_back(k);
    }
    vector<int>nge = NGE(v);
    for (int i = 0; i < t; i++)
    {
        cout<<v[i]<<" "<<(nge[i]==-1 ? -1 : v[nge[i]])<<endl;
    }
    
}