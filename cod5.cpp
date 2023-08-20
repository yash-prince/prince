#include <iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<num1;//<<this is called insertion operator.
    cin>>num1;//>>this is called extraction operator.
    cout<<num2;
    cin>>num2;
    int sum=num1+num2;
    cout<<"the sum is"<<sum;
    return 0;

}