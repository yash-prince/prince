#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"enter the no of rows: ";
    cin>>n;
for (int i = 1; i <=n; i++)
{
    int m=1;
    for (int j = 1; j <=i; j++)
    {
        cout<<m;
        m++;
    }
    cout<<endl;
}

    return 0;
}