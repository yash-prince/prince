#include<iostream>
using namespace std;
int main(){
    string s1;
    string s2;
   
    cout<<"enter 1st word: ";
    cin>>s1;
    cout<<"enter 2nd word: ";
    cin>>s2;
     string &p=s1;
    string &q=s2;
    if (p==q)
    {
       cout<<"word equal";
    }else{
        cout<<"not equal";
    }
    
}