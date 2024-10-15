#include<iostream>
using namespace std;
class student
{
    int age;
    int marks;

public:
student(){
    age=0;
    marks=0;
}
     void setdata(int a,int b){
        age=a;
        marks=b;

     }
     void getdata(){
        cout<<"the age of the student is: "<<age<<endl;
        cout<<"the marks of the student is: "<<marks<<endl;
     }
     void operator ++(int){
        ++marks;
     }

     void operator ++(){
        age++;
        
     }
     

};
int main(){
    student s;
    
    s.setdata(34,45);
    s.getdata();
    s++;
   s.getdata();
    ++s;
    s.getdata();
    return 0;
}