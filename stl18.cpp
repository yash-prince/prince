// lambda function
#include<bits/stdc++.h>
using namespace std;
bool is_positive(int x){
    return x>0;
}
int main(){
    // []...lambda function
    // cout<<[](int x,int y){return x+y;}(4,7)<<endl;
    // now we are giving a variable to lambda function
    // auto sum = [](int x,int y){return x+y;};
    // cout<<sum;
    vector<int> v ={2,-3,5};
    cout<<all_of(v.begin(),v.end(),[](int x){return x>0;});//all of element should satisfied the condition then it will return true
    cout<<all_of(v.begin(),v.end(),is_positive);
    cout<<any_of(v.begin(),v.end(),[](int x){return x>0;});//any of element is satisfied the condition then it will return true
    cout<<none_of(v.begin(),v.end(),[](int x){return x>0;});//none of element should satisfied the condition then it will return true
    
}