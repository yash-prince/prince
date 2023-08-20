// .........FUNCTION OVERLOADING IN C++............

#include <iostream>
using namespace std;

int sum(int a,int b){
    cout<<"using function with two arguments"<<endl;
    return a+b;
}
int sum(int a, int b, int c){
    cout<<"using function with 3 arguments"<<endl;
    return a+b+c;
}
float volume (float r ,int h){
    return 3.14*r*r*h;
}
int volume (float a){
    return a*a*a;
}
int area(int l){
    return l*l;
}
int main(){
    cout<<"the sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"the sum of 3 ,5,and 8 is "<<sum(3,5,8)<<endl;
    cout<<"the volume  of 3 ,4 is "<<volume(3,4)<<endl;
    cout<<"the volume of side 3 is "<<volume(3)<<endl;
    cout<<"the area of square of side 3 is "<<area(3)<<endl;
    
return 0;}