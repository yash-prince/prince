#include<iostream>
using namespace std;
class c2;
class c1{
    int data;
    public:
    void setdata(int value){
        data=value;
    }
        void display(){
            cout<<"the value of data is:"<<data<<endl;
        }
    
    friend void swap(c1 &,c2 &);
};
class c2{
    int num;
    public:
    void setdata(int value){
        num=value;
    }
    void display(){
        cout<<"the value of num is: "<<num<<endl;
    }
     friend void swap(c1 &,c2 &);
};
void swap(c1 &x, c2 &y){
    int temp=x.data;
    x.data=y.num;
    y.num=temp;
}
int main(){
    c1 a1;
    c2 a2;
    int a,b;
    cout<<"enter the value of data: ";
    cin>>a;
    a1.setdata(a);
    cout<<"enter the value of num: ";
    cin>>b;
    a2.setdata(b);
    swap(a1,a2);
    cout<<"the value of c1 after the swap becomes: "<<endl;
    a1.display();
    cout<<"the value of c2 after the swap becomes: "<<endl;
    a2.display();
    return 0;
}