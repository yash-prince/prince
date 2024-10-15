//....MAPS..........(m.find()operator).., m.erase()operator & m.clear()
#include<bits/stdc++.h>
using namespace std;
void print(map<int,string> &m){
    cout<<"size of the map"<<m.size()<<endl;
    for(auto pr: m){
         cout<<pr.first<<" "<<pr.second<<endl;
    }
}
int main(){
    map<int, string > m;
    m[1]="jsdoj";// time commplexicity...o(log (n))...to insert a value in a map
    m[4]="oerop";
    m[3]="ewpwa";
    m.insert({5,"powfp"});
    // m["abcd"]="adalh"; time complexity is s.size() * log (n)....s.size is due to comparing string 
    // map<int, string> :: iterator it;
    // for(it = m.begin();it != m.end();it++ ){
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }
    // cout<<endl;
    // //alternate method to access the maps....and use auto keyword
    for(auto &pr: m){
        cout<<pr.first<<" "<<pr.second<<endl;//....time coplexity to access the map is also the o(log(n))
    }
    // print(m);
    // auto its = m.find(3);// m.find operator will return the iterator...time complexity is  (O log(n))
    // // by default m.find will return the m.end()
    //  m.erase(3);// its the operator ..that will erase the key value....time complexity is log (n);
    //  m.clear();//..it will clear the map....it will use in every template like vectors etc.
    // if(its == m.end()){
    //     cout<<"no value";
    // }else{
    //     cout<<(*its).first<<" "<<(*its).second;
    //         }
    
    return 0;
}