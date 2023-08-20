// .......INLINE FUNCTIONS, DEFAULT ARGUMENTS & CONSTANT ARGUMENTS.............

#include <iostream>
using namespace std;

// inline int product(int a,int b){
// return a*b; }
// int product(int a,int b){
//     static int c=0;//this executes only once 
//     c=c+1;//next time this functionis run , the value of c will be retainerd
//     return a*b+c;
// }
// int product(int a,int b){
    //not recoomended to use below lines with inline functions
    // static int c=0;//this executes only once 
    // c=c+1;//next time this functionis run , the value of c will be retainerd
    // return a*b+c;
    // }
    int moneyReceived(int currentmoney,float factor=1.04){
    return currentmoney*factor;
    
    
}
int main(){
    // int a,b;
    // cout<<"enter the value of a and b is";
    // cin>>a>>b;
//     cout<<"the product of a and b is "<<product(a,b)<<endl;
//     cout<<"the product of a and b is "<<product(a,b)<<endl;
//     cout<<"the product of a and b is "<<product(a,b)<<endl;             
//     cout<<"the product of a and b is "<<product(a,b)<<endl;
 int money=100000;
 cout<<"if you have a" <<money<<"Rs in your bank then you will receive "<<moneyReceived(money)<<"Rs after one yr"<<endl;
 cout<<"for VIP : if you have a" <<money<<"Rs in your bank then you will receive "<<moneyReceived(money,1.1);
return 0;}