// THIS pointer in class 
#include<iostream>
using namespace std;
class A{
int a;
public:
void setData(int a){
//    this->a=a;
// }
// A &setData(int a){
   this->a=a;
//    return *this;
}
void getData(){
    cout<<"the value of a is: "<<a<<endl;
}
};
int main(){
    // this is a keyword  which is pointer which points to the object which invokes the member function
A a;
a.setData(9);
a.getData();
    return 0;
}