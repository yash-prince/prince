#include<bits/stdc++.h>
using namespace std;
int sum_of_digit(int n){
    if(n==0)return 0;
    int m=n%10;
    return sum_of_digit(n/10)+m;// time complexity of each function call is o(1) 
}
int main(){
    int n;
    cin>>n;
    cout<<sum_of_digit(n);
}
//Number of function calls -> number of digit in number
// what is the complexity of each function ->0(1)
//log(n ) of base 10