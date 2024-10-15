#include<iostream>
using namespace std;
int main(){
    int n;
    int a=65;
    cout<<"enteer the no of rows: ";
    cin>>n;
    for (int  i = 1; i <= n; i++)
    {
        
        for (int j = 1; j <= i; j++)
        {
            cout<<char(a)<<" ";
            a++;
        }
        cout<<endl;
    }
    
    return 0;
}