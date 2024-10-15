// Multilevel inheritence
#include <iostream>
using namespace std;
class student
{
protected:
    int Roll_no;

public:
    void set_Roll_no(int);
    void get_roll_no(void);
};
void student ::set_Roll_no(int r)
{
    Roll_no = r;
}
void student::get_roll_no()
{
    cout << "the roll no is: " << Roll_no << endl;
}
class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void exam::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void exam ::get_marks()
{
    cout << "the marks of the maths and physics is: " << maths << " , " << physics << endl;
}
class result : public exam
{
    float percentage;

public:
    void display()
    {
        get_roll_no();
        get_marks();
        cout << "the percenteage of the student is: " << (maths + physics) / 2;
    }
};
int main()
{
    /*
    Notes
    If we are inheriting B from A & C from B: [A--->B--->C]
    1.A is the base class for B and B is base class for C
    2.[A--->B--->C] it is the inheritance path
    */
    student s;
    s.set_Roll_no(4);
    s.get_roll_no();

    result r;
    r.set_Roll_no(420);
    r.set_marks(90, 95);
    r.display();

    return 0;
}