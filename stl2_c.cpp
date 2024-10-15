// VECTOR COPY & VECTOR PASS BY REFERANCE
// #include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int> &v)//here vector v is copying what passes by function printVec in main function
{
    cout<<"the size of the vector is: "<<v.size()<<endl;
    cout<<"the element in vector is: "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" "<<endl;
    }
    v.push_back(2);// here if referance of vector is passed then it will add in vector element otherwiseit won't.
}
int main(){
// vector<int>v(4);// the size of vector has set
// vector<int>v(4,1);// here the all 4 element in vector is setted as 1
vector<int>v;// we can declare any data type like string , double etc;
// int n;
// cout<<"no of elemet in vector: ";
// cin>>n;
v.push_back(7);
v.push_back(6);
// vector<int>v2=v;//here v2 is copying vector v , we can see by printing //0(n)
vector<int> &v2=v;// here v2 will not copy vector v ,it will direct accessing vector v , if element in v will change then v2 will also
printVec(v);
printVec(v);//if we pass the referance then here element in vector v will be 7,6,2
printVec(v2);
    return 0;
}