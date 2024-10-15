#include <iostream>
#include <cmath>
using namespace std;
class simpleCalc
{
    double a;
    double b;

public:
    double add(double m, double n)
    {
        a = m;
        b = n;
        return a + b;
    }
    double subtract(double m, double n)
    {
        a = m;
        b = n;
        return a - b;
    }
    double multiplication(double m, double n)
    {
        a = m;
        b = n;
        return a * b;
    }
    double divide(double m, double n)
    {
        a = m;
        b = n;
        return a / b;
    }
};
class scientificCalc
{
    double c;

public:
    double sine(double m)
    {
        c = m;
        return sin(c);
    }
    double cosine(double m)
    {
        c = m;
        return cos(c);
    }
    double tangent(double m)
    {
        c = m;
        return tan(c);
    }
};
class hybridCalc : public simpleCalc, public scientificCalc
{
};
int main()
{

    simpleCalc c;
    double p, q;
    char a;
    cout << "first number: ";
    cin >> p;
    cout << "choose +,-,* or / ";
    cin >> a;
    if (a == '+')
    {
        cout << "second number: ";
        cin >> q;
        cout << c.add(p, q) << endl;
    }
    if (a == '-')
    {
        cout << "second number: ";
        cin >> q;
        cout << c.subtract(p, q) << endl;
    }
    if (a == '*')
    {
        cout << "second number: ";
        cin >> q;
        cout << c.multiplication(p, q) << endl;
    }
    if (a == '/')
    {
        cout << "second number: ";
        cin >> q;
        cout << c.divide(p, q) << endl;
    }
    scientificCalc s;
    string trig;
    double angle;
    cout << "enter the trigo(sin,cos,tan,cot,sec or cosec) function and angle " << endl;
    cin >> trig >> angle;

    if (trig == "sin")
    {
        cout << s.sine(angle);
    }
    if (trig == "cos")
    {
        cout << s.cosine(angle);
    }
    if (trig == "tan")
    {
        cout << s.tangent(angle);
    }
    if (trig == "cot")
    {
        cout << (1 / s.tangent(angle));
    }
    if (trig == "sec")
    {
        cout << (1 / s.cosine(angle));
    }
    if (trig == "cosec")
    {
        cout << (1 / s.sine(angle));
    }

    return 0;
}