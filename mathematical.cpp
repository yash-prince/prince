#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int min_el=1e9;
        pair<int,int> pii;
        for (int i = 1; i < n; i++)
        {
            int make_no=(10 * (s[i-1] - '0'))+(s[i]-'0');
            min_el=min(min_el,make_no);
            if(min_el == make_no){
                pii={i-1,i};
            }
        }
        bool check_zero=false;
        if(n > 3){
            for (int i = 0; i < n; i++)
            {
                if(s[i]=='0'){
                    check_zero=true;
                    cout<<0<<endl;
                }
            }
            int cal=0;
            if(check_zero==false){
                int ct=0;
                for (int i = 0; i < n; i++)
                {
                    if(i == pii.first && i + 1 == pii.second){
                        if(ct == 0)
                        cal +=min_el;
                        ct++;
                        i++;
                    }
                    if( s[i] == '1' && i !=pii.first && i+1 != pii.second ){
                        cal *=1;
                    }else {
                        cal +=(s[i]-'0');
                    }
                }
                
            }
            cout<<cal<<endl;

        }else if( n == 3){
                if(s[0]=='0' || s[2]=='0'){
                    cout<<0<<endl;
                }
                int fi=(10 * (s[0]-'0'))+(s[1]-'0');
                int se=(10 * (s[1]-'0'))+(s[2]-'0');
                int fi_min=(fi,se);
                

        }else if(n==2){
            cout<<(s[0]-'0')<<(s[1]-'0')<<endl;
        }
        
    }
}