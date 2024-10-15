#include<iostream>
using namespace std;
class bank_deposit{
    int principlevalue;
    int years;
    float interestRate;
    float returnValue;
    public:
    bank_deposit(){}
    bank_deposit(int p,int y,float r);
    bank_deposit(int p,int y,int r);
    void show();
};
bank_deposit::bank_deposit(int p,int y,float r){
    principlevalue=p;
    years=y;
    interestRate=r;
    returnValue=principlevalue;
    for (int i = 0; i < y; i++)
    {
        returnValue=returnValue*(1+r);
    }
}
    bank_deposit :: bank_deposit(int p,int y,int r){
    principlevalue=p;
    years=y;
    interestRate=float(r)/100;
    returnValue=principlevalue;
    for (int i = 0; i < y; i++)
    {
        returnValue=returnValue*(1+interestRate);
    }
    
}
void bank_deposit::show(){
cout<<"principlevalue was: "<<principlevalue<<endl<<"return value after "<<years<<" years is "<<endl<<returnValue<<endl;
}
int main(){
bank_deposit bd1,bd2,bd3;
int p,y,R;
float r;
cout<<"enter the value of p ,y ,r ";
cin>>p>>y>>r;
bd1=bank_deposit(p,y,r);
bd1.show();
cout<<"enter the value of p ,y ,R ";
cin>>p>>y>>R;
bd2=bank_deposit(p,y,R);
bd2.show();
    return 0;
}