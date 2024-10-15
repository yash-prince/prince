#include<iostream>
using namespace std;

int main(){
    int c ,d;
    string s , s1;
    cin>>d;
   for (int  i = 0; i < d; i++)
   {    int x;
        int a=0;
        int b=0;
        cin>>x;
        cin>>s;
        cin>>s1;
        for (int  i = 0; i < s.length(); i++)
    {
       if (s[i]!= s1[i])
       {
            if (s[i] =='1')
            {
                a++;
            }else if (s[i]=='0')
            {
                b++;
            }
       }
   }
    if (b>a)
    {
       c=b;
        
    }else if (a>b)
    {
        c=a;
        
    }else if (a==b)
    {
        c=a;
    }
     else if (a==0 && b==0)
    {
       c=0;
    }
    
    cout<<c<<endl;
   }
   
    return 0;
}