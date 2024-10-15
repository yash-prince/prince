#include<iostream>
using namespace std;
int count =0;
float sum=0;
class student{
int age;
float marks;
public:
void setdata(float b){
    marks=b;
sum += marks;
}
friend float totalmarks();
};
float totalmarks(){
    return sum;
}
int main(){
int n;
cout<<"The no of student u ant to stored: ";
cin>>n;
student s[n];
float m;
for (int  i = 0; i < n; i++)
{
    cout<<"enter the marks of student "<<i+1<<": ";
    cin>>m;
    s[i].setdata(m);
}
cout<<"the total marks of the student is: "<<totalmarks();
    return 0;
}