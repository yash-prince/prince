#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int m=1;
  int a[31];
  int count=0;
  for (int  i = 0; i < 31; i++)
  {
    a[i]=m;
    m=m*2;
  }
  for (int i = 0; i <31; i++)
  {
   if(a[i]==n){
    cout<<"yes";
    count++;
   } 
  }
  if(count==0){
    cout<<"no";
  }
}