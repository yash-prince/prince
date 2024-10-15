#include<iostream>
using namespace std;
class complex;
class calculator{
    public:
    int sumRealcomp(complex ,complex );
    int sumImacomp(complex ,complex );
};
class complex{
    int a,b;
    // individually declare function as a friends
    friend int calculator::sumRealcomp(complex o1,complex o2);
    friend int calculator::sumImacomp(complex o1 ,complex o2);
    // alter: Declaring the entire calculator class as a friend
    // friend class calculator;
    public:
    void setNumber(int n1,int n2){
        a=n1;
        b=n2;
    }
    void printNum(){
        cout<<"your no is "<<a<<"+ i"<<b;
    }
};
int  calculator::sumRealcomp(complex o1,complex o2){
    return(o1.a+o2.a);
}
int calculator::sumImacomp(complex o1,complex o2){
    return(o1.b+o2.b);
}

int main(){
    complex o1,o2;
    int c,d;
    cout<<"enter the real part of o1 & imaginary part of o1 :";
    cin>>c>>d;
    int e,f;
     cout<<"enter the real part of  & imaginary part of  :";
    cin>>e>>f;
    o1.setNumber(c,d);
    o1.printNum();
    o2.setNumber(e,f);
    o2.printNum();
    calculator calc;
    cout<<"complex no is: "<<calc.sumRealcomp(o1,o2 )<<"+ i"<<calc.sumImacomp(o1,o2 );
    return 0;
}