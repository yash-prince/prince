#include<iostream>
using namespace std;
//  Base Class
class employee{
  
  public:
  int id;
  float salary;
  employee(int inpId){
    id=inpId;
    salary=34.0;
  }  
  employee(){}
};
// Derived Class
/*
class {{derived-class-name}} : {{visibility-mode}}{{base-class}}
{
    class member/methods/etc....
}
NOTES: 
1. Default visibility mode is private
2. Public Visibility mode : public members of the base class becomes PUBLIC members of the derived class 
2. Private Visibility mode : public members of the base class becomes private members of the derived class 
2. Private Visibility mode : PRIVATE members of the base class WILL never inherited 
*/
class programmer : public employee{
    public:
     int language= 9;
    programmer(int inpId){
        id=inpId;
       
    }
    void getdata(){
        cout<<id;
    }
};
//Creating a programmer class derived from employee Base class
int main(){
    employee prince(1),satyam(2);
    cout<<prince.salary<<endl;
    cout<<satyam.salary<<endl;
    programmer skillf(20);
    cout<<skillf.language<<endl;
    cout<<skillf.id<<endl;
    skillf.getdata();
    return 0;
}