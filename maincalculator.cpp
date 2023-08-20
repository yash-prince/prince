#include <iostream>

using namespace std;

double power(double base, double exponent)
{
    int result = 1.0;
    for (int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
}
int factorial(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
double sine(double x, int term)
{
    double result = 0.0;
    for (int n = 0; n < term; n++)

    {
        double value = (power(-1, n) * power(x, 2 * n + 1)) / factorial(2 * n + 1);
        result += value;
    }
    return result;
}
double cos(double x, int term)
{
    double result = 0.0;
    for (int n = 0; n < term; n++)

    {
        double value = (power(-1, n) * power(x, 2 * n)) / factorial(2 * n);
        result += value;
    }
    return result;
}

int main()
{
    char op;
    int a, b;
    double angle = 0.0;
    int term = 0;

    cout << "choose the op(+,-,*,/,^,s,c,t): ";
    cin >> op;
    if (op == 's' || op == 'c' || op == 't')
    {
        cout << "enter the angle in radian: ";
        cin >> angle;
        cout << "no of term: ";
        cin >> term;

        switch (op)
        {
        case 's':
            double sineValue = sine(angle, term);
            cout << sineValue;
            break;
        case 'c':
            double cosValue = cos(angle, term);
            cout << cosValue;
            break;
        case 't':
            double sineValue = sine(angle, term);
            double cosValue = cos(angle, term);
            cout << sineValue / cosValue;
            break;
        }
    }
    else if (op == '+' || '-' || op == '*' || op == '/' || op == '^')
    {
        cout << "enter the first no: ";
        cin >> a;
        cout << "enter the second no: ";
        cin >> b;
    }
    switch (op)
    {

    case '^':

        cout << power(a, b);
        break;

    case '+':
        cout << a << "+" << b << "==" << a + b;
        break;

    case '-':
        cout << a << "-" << b << "==" << a - b;
        break;

    case '*':
        cout << a << "*" << b << "==" << a * b;
        break;

    case '/':

        if (b != 0)
        {
            cout << a << "/" << b << "==" << a / b;
        }
        else if (b == 0)
        {
            cout << "error";
        }
        break;

        // default:
        //     cout << "invalid term";
        //     break;
    }
}