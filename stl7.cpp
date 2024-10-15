//...UNORDERED MAPS....
#include<bits/stdc++.h>
using namespace std;
int main(){
    // 1. inbuilt implementation
    // 2. time complexity
    // 3. valid key datatype
   //  note: we can not use all type as a key in a unordered maps....because their hash function is not defined like pair , set , vectors etc.
  unordered_map<int , string>m;
  m[1]="abc";//time complexity is 0(1);
  m[5]="cdc";
  m[3]="acd";
    return 0;
}