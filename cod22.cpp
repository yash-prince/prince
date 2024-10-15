#include <iostream>
#include<string>
using namespace std;
class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};
void binary::read(void)
{
    cout << "enter the binary number" << endl;
    cin >> s;
}
void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary :: ones_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
      else
        {
            s.at(i) = '0';
        }
    }
}
void binary :: display(void)
{
    for (int i = 0; i < s.length(); i++)
        cout << s.at(i);
}
int main()
{
    //  OOPs-classes and objects
    // c++--->initially called----> c with classes by stroustroup
    // class---> extension of structures(in c)
    // structure had limitations:
    //   -members are public
    //   -no methods
    //   classes--->structure + more
    //   classes--->can have methods and properties
    //   classes--->can make few members as private and few As public
    //   structure in c++ are typedefed
    //   you can declare objects with class declaration like this:
    /*class employee{
        class definition
    }prince,khushi,swangi,adarsh,chutki,bolti*/
    // prince.salary=8 makes no sense if salary is private
    // nesting of member functions
    binary b;
    b.read();
    b.chk_bin();
    b.ones_compliment();
    b.display();
    return 0;
}