#include<bits/stdc++.h>
using namespace std;
int main(){
    double a=100000;
    double b=100000;
    double c=a*b;
    // cout<<c;//it will give scientific value like 1e*10^5
    // cout<<fixed<<setprecision(0)<<c;//it will give like 100000000
    cout<<fixed<<c;//it will give in decimal figurre like 100000000.0000
    /*
    -10^9 < int < 10^9
    -10^12 < long int < 10^12
    -10^18 <long long int < 10^18
    */

}