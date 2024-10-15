#include<bits/stdc++.h>
using namespace std;
bool check(string s1 ,string s2){
     if(s1.length() == s2.length()){
        for (int i = 0; i < s1.length(); i++)
        {
            if(s1[i]!= s2[i] && s1 [i]!='?'){
                return false;
            }
        }
        
       }
       return true;
}
int main(){
int t;
cin>>t;
while(t--){
    string s1 ,s2;
    cin>>s1>>s2;
    int k=0;
    
    for (int i = 0; i < s1.length(); i++)
    {
       if(s1[i]=='?'){
        k++;
       }  
    }
    check(s1,s2);
   
    if(s1.length()!= s2.length()){
        if(k>= s2.length()){
            cout<<"yes"<<endl;
            for (int i = 0; i < s1.length(); i++)
            {
                if(s1[i]!='?'){
                    cout<<s1[i];
                }else { 
                    if((i+1)<= s2.length())
                    {
                        cout<<s2[i];
                    }else{
                        cout<<'a';
                    }
                }
            }
            cout<<endl;
            
        }else{
            cout<<"no";
        }
    }else if(s1.length()== s2.length()){
        if(check){
            cout<<"yes"<<endl;
            for (int i = 0; i < s1.length(); i++)
            {
                 if(s1[i]!='?'){
                    cout<<s2[i];
                
                }else{
                    cout<<s2[i];

                }
            }
            cout<<endl;
            
        }else{
            cout<<"no"<<endl;
        }
    }
}
}