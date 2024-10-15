#include<iostream>
using namespace std;
int count=0;
float sum=0;
int a;
class student{
    int age;
    
    float marks=0;
    public:
    student (){
        cout<<"enter the age of the student: ";
        cin>>age;
        cout<<"the marks of the stuedent is: ";
        cin>>marks;

    }
    friend void setmarks();
   friend int totalmarks(student s[]);
    
};
 void setmarks(int n){
        a=n;
    };
    int totalmarks(student s[]){
        for (int  i = 0; i < a; i++)
        {
            sum +=s[i].marks;
        }
        return sum;
    }

int main(){
int n;
cout<<"enter the number of student u want to stored: ";
cin>>n;
student s[n];
setmarks(n);
cout<<"the total marks of the student is: "<<totalmarks(s);
    return 0;
}