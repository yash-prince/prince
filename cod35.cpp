#include<iostream>
using namespace std;
/*destructor never takes an argument nor does return any value */
int count=0;
class num{
    public:
    num(){
        count++;
        cout<<"this is the time constructor is called for object number "<<count<<endl;
    }
    ~num(){ 
        cout<<"this is the time when destructor is called for object number"<<count<<endl;
        count--;
    }
};
int main(){
    cout<<"we are inside in  our main function"<<endl;
    cout<<"creating first object "<<endl;
    num n1;
    {
        cout<<"entering the block: "<<endl;
        cout<<"creating second & third object "<<endl;
        num n2,numn3;
        cout<<"exiting the block"<<endl;
    }
    return 0;
}