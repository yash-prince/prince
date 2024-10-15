#include <bits/stdc++.h>
using namespace std;
void printbinary(int n)
{
    for (int i =31; i >=0; i--)
    {
        cout<<((n>>i)& 1);
    }
}
int main()
{
    int a;
    cin >> a;
    int i;
    cin >> i;
    printbinary(a);
    cout<<endl;
    if ((a & (1 << i)) != 0)
    {
        cout << "set "<<endl;
        a = (a & ~(1 << i));
        printbinary(a);
    }
    else
    {
        cout << "unset " << endl;
        
    }
}