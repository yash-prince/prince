#include<iostream>
using namespace std;
class y;
class x{
int data;
public:
void setValue(int value){
    data=value;
}
friend void add(x,y);
};

class y{
    int num;
    public:
    void setValue(int value){
        num=value;
    }
    friend void add(x,y);
};

void add(x o1,y o2){
    cout<<"summing data of x and y object gives me "<< o2.num+o1.data;
}
int main(){
int a,b;
x a1;
cout<<"enter the value of data ";
cin>>a;
a1.setValue(a);
y b1;
cout<<"enter the value of num ";
cin>>b;
b1.setValue(b);

add(a1,b1);
return 0;
}