#include<iostream>
#include<cmath>
using namespace std;
class point {
   
     friend void distance();
    public:
     int x,y;
    point(int a,int b){
        x=a;
        y=b;
    }
    void displaypoint(){
        cout<<"the coordinate is:"<<x<<","<<y<<endl;
    }
   
};
void distance(point p,point q){

    cout<<"distance between two points:"<<sqrt(pow(((p.x)-(q.x)),2)+pow(((p.y)-(q.y)),2));
}
int main(){
    point p(1,1);
    p.displaypoint();
    point q(2,2);
    q.displaypoint();
    distance(p,q);
    return 0;
}