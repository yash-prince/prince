#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n ,k;
    cout<<"the no of bags "<<endl;
    cin>>n;
    cout<<"minutes "<<endl;
    cin>>k;
    multiset<long long> m;
    for(int i =0; i<n; i++){
        int q;
        cin>>q;
        m.insert(q);
    }
    long long candy_ct=0;
    for (int  i = 0; i < k; i++)
    {
        auto last_it =(--(m.end()));
        candy_ct +=*last_it;
        m.erase(*last_it);
        m.insert(int(*last_it/2));
    }
    cout<<candy_ct;
    
    return 0;
}