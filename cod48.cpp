#include<iostream>
/*
case 1:
class B: public A{
   // order of constructor-> forstA()then B()
};
case 2:
class A:public B, public c{
    // order of constrructor -> B() then C()and A()
};
case 3:
class A: public B,virtual public C{
    // order of constructor -> first c() then B()and then A()
};
*/
using namespace std;
class base1{
    int data1;
public:
base1(int m){
    data1=m;
    cout<<"base1 constructor is called "<<endl;
}
void printData1(void){
    cout<<"the value of data1 is: "<<data1<<endl;
}
};
class base2{
    int data2;
    public:
    base2(int m){
        data2=m;
        cout<<"base2 constructor is called "<<endl;

    }
    void printdata2(){
        cout<<"the value of data2 is: "<<data2;
    }
};
class derived : public base1 ,public base2{
 int derived1;
 public:
 derived(int a,int b ,int c): base1(a) , base2(b){
    derived1=c;
    cout<<"derived constructor is called "<<endl;
 }
 void printDerived(){
    cout<<"the value of derived: "<<derived1;
 }
};
int main(){
derived d(4,5,6);
d.printData1();
d.printdata2();
d.printDerived();

    return 0;
}