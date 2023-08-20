// ........FUNCTION & FUNCTION PROTOTYPES..........

#include <iostream>
using namespace std;
// Function prototypes
// type function-name(arguments);
// int sum(int a,int b);--->acceptable
// int sum(int a,b);---->not acceptable
int sum(int ,int );//---->Acceptable
void g();

int main(){
    int num1,num2;
    cout<<"enter the value of num1"<<endl;
    cin>>num1;
     cout<<"enter the value of num2"<<endl;
   cin>>num2;
//    num1 and num2 are actual parameters

  cout<<"the sum is "<<sum(num1,num2);
  g();
return 0;}
int sum(int a,int b){
// Formal parameters a and b will be taking values from actual parameters num1 and num2
        int c=a+b;
        return c;
    }
    void g(){
        cout<<"\nHello Good morning";
    }
    // formal parameter and and actual parameter may be same