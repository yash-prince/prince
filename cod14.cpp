// ........STRUCTURE ,UNIONS & ENUMS IN C++........

#include <iostream>
using namespace std;

// struct employee{
//     int eID;
//     char favChar;
//     float salary;
// };

// int main(){
//     struct employee prince;
//     prince.eID=1;
//     prince.favChar='c';
//     prince.salary=1000000;
//     cout<<"the value is "<<prince.eID<<endl;
//     cout<<"the value is "<<prince.favChar<<endl;
//     cout<<"the value is "<<prince.salary<<endl;/


typedef struct employee{
    int eID;
    char favChar;
    float salary;
}ep;
// after using typedef i can use my word in place of struct employ;as ex;here i used 'ep'.
int main(){
    // ep prince;
    // prince.eID=1;
    // prince.favChar='c';
    // prince.salary=1000000;
    // cout<<"the value is "<<prince.eID<<endl;
    // cout<<"the value is "<<prince.favChar<<endl;
    // cout<<"the value is "<<prince.salary<<endl;

    union money{
    int rice;
    char car;
    float pounds;
};
union money m2;
// m2.rice=34;
m2.car='c';
cout<<m2.car<<endl;
enum meal{breakfast,lunch,dinner};
// meal m1=breakfast;
meal m1=lunch;
cout<<(m1==1);
// cout<<breakfast<<endl;
// cout<<lunch<<endl;
// cout<<dinner<<endl;
         
return 0;}