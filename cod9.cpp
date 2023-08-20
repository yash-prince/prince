// c++ control structure
// 1. sequence structure
// 2. selection structure
// 3. loop structure

#include <iostream>

using namespace std;
int main(){
    // cout<<"this is prince";
    int age ;
    cout<<"tell me your age:";

    cin>>age;
    // selection control structure:if else ,if else ladder
//     if((age<18)&&(age>0)){
//         cout<<"you can not come to my party"<<endl;

//     }
// else if(age==18){
//     cout<<"you are a kid and you will get a kid pass to the party"<<endl;
// }
// else if (age<1){
//     cout<<"you are not yet born";
// }
// else {
//     cout<<"you will come to my party"<<endl;
// }
// selection control structure:switch case staatement
switch(age){
    case 18:
    cout<<"you are 18";
    // break;
    
case 22:
    cout<<"you are 22";
    // break;
    
    
case 2:
    cout<<"you are 2";
    // break;
}
    
}       