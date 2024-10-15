//.....VIRTUAL FUNCTION......IN C++....
#include<iostream>
using namespace std;
class base_class{
    public:
    int var_base = 1;
    virtual void display(){
        cout<<"1 displaying base class variable "<<var_base;
    }
};
class derived_class: public base_class{
    public:
    int der_base = 2;
    void display(){
    cout<<" 2 displaying derived class variable: "<<der_base;
    }
};
int main(){
base_class * base_class_pointer;
base_class obj_base;
derived_class obj_derived;
base_class_pointer = &obj_derived;
base_class_pointer->display();
    return 0;
}