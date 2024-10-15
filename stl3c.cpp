//....vectors of vector....
#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int> v){
    cout<<"size: "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" "<<endl;
    }
    
}
int main(){
    int n;
    cout<<"the no of vector: "<<endl;
    cin>>n;
    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        int m;
        cout<<"the no of elements in a vector: "<<endl;
        cin>>m;
        vector<int> temp;
        v.push_back(vector<int> ());//her we have initiated a empty vector ..i.e oth vector is a empty vector.
        for (int j = 0; j < m; j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);//here vector of vector will be made.
            // v[i].push_back(x);//now v[i]has already existed.so no need of defined extra vector.
        }
        v.push_back(temp);//here 1st it will form 0th vector then 2nd ....and then continue how many we have to made
    }
    v[0].push_back(10);//it will add 10 in the end of a 0th vector.
    v.push_back(vector<int> ());// her i am adding a empy vector..after this, there will be (n+1) vector...last vector will be null.
    for (int i = 0; i < v.size(); i++)
    {
        printVec(v[i]);
    }
    
    
    return 0;
}