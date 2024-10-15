#include<iostream>
using namespace std;
//syntax for inheriting in multiple inheritance
// class  derivedC : visibility-mode base1, visibility- mode base2
// {
//    class body of class "derivedC"
// };
class base1{
    protected: 
    int baseInt1;
    public:
    void set_base1int(int a){
        baseInt1 =a;
    }
};
class base2{
    protected: 
    int baseInt2;
    public:
    void set_base2int(int a){
        baseInt2 =a;
    }
};
class derived :public base1, public base2
{
    public:
    void show(){
        cout<<"the value of base1 is "<<baseInt1<<endl;
        cout<<"the value of base2 is "<<baseInt2<<endl;
        cout<<"the vsum of base1 and base2  is "<<baseInt1+ baseInt2<<endl;
    }
};
/*
The inherited derived class will look like this:
Data members
baseint1--->protected
baseint2--->protected
member function:
set_base1int()--->public
set_base2int()--->public
show()--->public
*/
int main(){
    derived prince;
    prince.set_base1int(55);
    prince.set_base2int(250);
    prince.show();
    return 0;
}