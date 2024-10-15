#include<iostream>
using namespace std;
int main(){
    string s;
    int count=0;
    cout<<"enter ur word: "<<endl;
    cin>>s;
    string *p=&s;
   
    for (int i = 0; i < s.length(); i++)
    {
        if ((*p)[i]=='a'||(*p)[i]=='e'||(*p)[i]=='i'||(*p)[i]=='o'||(*p)[i]=='u'||(*p)[i]=='A'||(*p)[i]=='E'||(*p)[i]=='I'||(*p)[i]=='O'||(*p)[i]=='U')
        {
            count++;
        }
    }
    cout<<count;
    
}