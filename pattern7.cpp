#include<iostream>
using namespace std;
int main(){
    int n;
    int m=1;
    cout<<"enter the no of rows: ";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        m=i;
        for (int c = 1; c<= n-i; c++)
            {
                cout<<"  ";
            }
        for (int j = 1; j <= i; j++)
        {
            cout<<m<<" ";
            m++;
        }
        m--;
        for (int k = 1; k <=i-1; k++)
        {
            m--;
            cout<<m<<" ";
        }
        
        cout<<endl;
        
    }
    
    return 0;
}