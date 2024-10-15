#include<iostream>
using namespace std;

int main(){
// baisc example
int a=4;
int *ptr = &a;
*ptr=99;
cout<<"the value of a is: "<<*(ptr)<<endl;
// new keyword
// int *p= new int (40);
float *p=new float (40.98);
cout<<"the value at address p is "<<*(p)<<endl;

int * arr = new int [3];
arr[0]=10;
arr[1]=23;
arr[2]=12;
cout<<"The value of arr[0] is "<<arr[0]<<endl;
cout<<"The value of arr[1] is "<<arr[1]<<endl;
cout<<"The value of arr[2] is "<<arr[2]<<endl;
// delete operator
delete[] arr;
cout<<"The value of arr[0] is "<<arr[0]<<endl;
cout<<"The value of arr[1] is "<<arr[1]<<endl;
cout<<"The value of arr[2] is "<<arr[2]<<endl;
return 0;
}