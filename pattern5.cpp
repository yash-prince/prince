#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enteer the no of rows: ";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = i; j <=n; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}