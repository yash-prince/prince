#include<iostream>
using namespace std;
class s{
    int age;
    public:
    s(int a){
        age=a;
    }
    bool operator >(s c){
        return c.age>age;
    }
};
int main(){
s b(6);
s c(8);

if (b>c)
{
    cout<<"they equal ";
}else{
    cout<<"uequal";
}
return 0;
}