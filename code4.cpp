#include <iostream>
using namespace std;
int glo=4;
void sum(){
    cout<<glo;
}
int main(){
    int glo=35;
     glo=100;
    int a=4;
    int b=5;
    float pi=3.14;
    char c='d';
    bool com = false;

    sum();
    cout<<glo<<com;
    // cout<<"here the value of c is"<<c;
    // cout<<"\n here the value of pi is "<<pi;
    // cout<<"\n here the value of a is "<<a<<" the value of b is "<<b;
    return 0;

}