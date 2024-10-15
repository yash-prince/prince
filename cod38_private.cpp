#include<iostream>
using namespace std;
class base{
    int data1;//private by default and is not inheritable
    public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void base:: setdata(void){
    data1=10;
    data2=20;
}
int base:: getdata1(){
    return data1;
}
int base:: getdata2(){
    return data2;
}
class  derived : private base{//class is being derives publically
  int data3;
  public:
  void process();
  void display();
};
void derived:: process(){
    setdata();
    data3= data2 * getdata1();
    
}
void derived :: display(){
    cout<<"the value of data1 is: "<<getdata1()<<endl;
    cout<<"the value of data2 is: "<<getdata2()<<endl;
    cout<<"the value of data3 is: "<<data3<<endl;
    
}
int main(){
    derived d1;
    // d1.setdata(); it cannot be called in this because visibility mode is private
    d1.process();
    d1.display();
    return 0;
}