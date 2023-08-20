// ...............CALL BY VALUE AND CALL BY REFERANCE.............

#include <iostream>
using namespace std;

int sum(int a ,int b){
    int c=a+b;
    return c;
}
//this will not swap
void swap(int a, int b){//temp a b
    int temp=a;         //4   4  5
    a=b;                //4   5  5
    b=temp;             //4   5  4
}
//call by reference using c++ referance variables
// void swapPointer(int* a, int* b){//temp a b
//     int temp=*a;         //4   4  5
//     *a=*b;                //4   5  5
//     *b=temp;             //4   5  4
// }
// void swapReferenceVar(int &a, int &b){//temp a b
//     int temp=a;         //4   4  5
//     a=b;                //4   5  5
//     b=temp;             //4   5  4
// }
int & swapReferenceVar(int &a, int &b){//temp a b
    int temp=a;         //4   4  5
    a=b;                //4   5  5
    b=temp;             //4   5  4
    return a;
}
int main(){
  int x=4,y=5;
//  cout<<"the sum of 4 and 5 is "<<sum(4,5);  
cout<<"the value of x is"<<x<<"the value of y is  "<<y<<endl;  
// swap(x,y);//this will not swap
// swapPointer(&x,&y) ;//this will swap x and y using pointers variable 
swapReferenceVar(x,y);
// swapReferenceVar(x,y)=34;//this will swap a and b usinf referance variable
cout<<"the value of x is"<<x<<"the value of y is  "<<y<<endl;

return 0;} 