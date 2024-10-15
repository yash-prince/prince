//  VIRTUAL BASE CLASS IN C++
#include<iostream>
using namespace std;
class student{
    protected:
    int roll_no;
    public:
    void set_rollno(int a){
        roll_no=a;
    }
    void print_no(void){
       cout<<"your roll no is: "<<roll_no<<endl;
    }
};
class test : public virtual student {
    protected:
    float maths,physics;
    public:
    void set_marks(float a,float b){
        maths=a;
        physics=b;
    }
    void print_marks(){
        cout<<"your result is here: "
            <<"maths: "<<maths<<endl
            <<"physics: "<<physics<<endl;

    }
};
class sports : virtual public student{
    protected:
        float score;
        public:
        void set_score(float a){
            score=a;
        }
        void print_score(){
            cout<<"your PT score is: "<<score<<endl;
        }
};
class result: public test,public sports{
    private:
    float total;
    public:
    void display(){
        total= maths + physics + score;
        print_no();
        print_marks();
        print_score();
        cout<<"your totalscore is: "<<total;
    }
};
int main(){
    result prince;
    prince.set_rollno(10);
    prince.set_marks(40,50);
    prince.set_score(90);
    prince.display();
    return 0;
}