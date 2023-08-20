// ......POINTERS IN C++.....

#include <iostream>
using namespace std;

int main(){
    // what is pointer: -----> data type which holds the address of other data tyopes
    int a=3;
     int*b=&a;
    //  &----->(address of) operator
    cout<<"the address of a is"<<&a<<endl;
    cout<<"the address of a is"<<b<<endl;
    // *----->(value at) dereference operator
    cout<<"the value at address b is"<<*b<<endl; 
//    pointer to pointer
int**c=&b;
cout<<"the address of b is "<<&b<<endl;
cout<<"the address of b is "<<c<<endl;
    cout<<"the value at c is"<<*c<<endl;
    cout<<"the value at address value (value at c) is"<<**c<<endl;
    


return 0;}