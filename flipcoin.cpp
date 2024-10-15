#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // int m;
        // cin>>m;
        string s;
        cin >> s;
        // for (int i = 0; i < m; i++)
        // {   if(s.length()>2){
        //     if(s[i]=='U'&& i== m-1){
        //         s.pop_back();
        //         if(s[i-1]=='U'){
        //             s[i-1]='D';
        //         }else if(s[i-1]=='D'){
        //             s[i-1]='U';
        //         }
        //         if(s[0]=='U'){
        //             s[i-1]='D';
        //         }else if(s[0]=='D'){
        //             s[i-1]='U';
        //         }
        //     }
        // }
        // }
        s.erase('U');
         cout<<s;
        
    }
}