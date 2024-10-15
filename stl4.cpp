//......ITERATORS....it is used for accessing the container....
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v= {2,3,5,4,6};
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> :: iterator it = v.begin();//...here iterators has defined
    cout<<(*it)<<endl;
    for (it = v.begin(); it < v.end(); it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
    /*
    ...NOTE: 
    it++.....means next iterator
    it+1....means next location
    in vector case both next location and next iterator are same.
    */
   vector<pair<int,int>> v_p ={{2,3},{3,4},{1,6}};
   vector<pair<int,int>> :: iterator its;
   for ( its = v_p.begin(); its< v_p.end(); its++)
   {
        cout<<(*its).first<<","<<(*its).second<<" ";
   }
   cout<<endl;
   // we can use this instead of above...when iterators acess the pair if vectors
    for (its = v_p.begin(); its< v_p.end(); its++)
    {
        cout<<its->first<<","<<its->second<<" ";
    }
    // (*it).first <=> (it->first)....both are equal
    
    return 0;
}