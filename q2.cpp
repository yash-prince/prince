#include<iostream>
using namespace std;
int sum=0;
float sum1=0;
int count=0;
class student{
    int age;
    float marks;
    public:
    void setdata(int a,float b){
        age=a;
        marks=b;
    }
    void getdata(){
        cout<<"age of the student: "<<age<<endl;
        cout<<"marks of the student: "<<marks<<endl;
        sum+=age;
        sum1+=marks; 
        count++;
    }
    void average(){
        cout<<"average of the age of the student is "<<sum/count<<endl;
        cout<<"average of the marks of the student is "<<sum1/count<<endl;
    }
};
int main(){
    int n;
    cout<<"enter the no of student u want to stored: "<<endl;
    cin>>n;
    student *ptr=new student[n];
    student *ptrTemp=ptr;
    int p;
    float q;
    for (int i = 0; i < n; i++)
    {
        cout<<"age of "<<i+1<<"st student: "<<endl;
        cin>>p;
        cout<<"marks of the student: "<<endl;
        cin>>q;
        (*ptr).setdata(p,q);
        ptr++;
    }
    for (int i = 0; i < n; i++)
    {
        (*ptrTemp).getdata();
        ptrTemp++;
    }

    (*ptr).average();
    return 0;
}