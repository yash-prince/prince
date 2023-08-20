// #ARRAYS IN C++;
// an array is a collection of item of similar types stored in contiguous memory locations.
// sometimes , a simple variable is not enough to hold all the data.
// for example ,lets we have to store marks of 2500 students having 2500 different variables for this task is not fisible.
// to solve this problem we can define an array with size 2500 that can hold the marks of all students.

#include <iostream>
using namespace std;

int main(){
    int marks[4]={34,23,87,99,};
   int mathmarks[4];

   mathmarks[0]=22;
   mathmarks[1]=45;
   mathmarks[2]=344;
   mathmarks[3]=487;
cout<<"these are the mathmarks";
cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;

    cout<<"these are the marks";
//     cout<<marks[0]<<endl;
//     cout<<marks[1]<<endl;
// //  you can change the value of an array
//     marks[2]=43;
//     cout<<marks[2]<<endl;
//     cout<<marks[3]<<endl;
for (int i = 0; i <=4; i++)
{
    cout<<marks[i]<<endl;
}
// int i=0;
// while (i<=4);
// {
//     cout<<"the value of marks"<<i<<"is"<<marks[i];
// }
// pointers and arrays
int*p=marks;
// cout<<"the value of *p is"<<*p<<endl;
// cout<<"the value of *(p+1) is"<<*(p+1)<<endl;
// cout<<"the value of*(p+2) is"<<*(p+2)<<endl;
// cout<<"the value of *(p+3) is"<<*(p+3)<<endl;
cout<<"the value of *p"<<*p;
cout<<*p++;
cout<<*p;
cout<<*p++;

return 0;}