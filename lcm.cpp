#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int m, n;
    cout << "enter the numbers: " << endl;
    cin >> a >> b;
    if (a > b && a>0 && b>0)
    {
        for (int i = 1; i < a; i++)
        {
            m = a * i;
            // n = b * i;
            if (m %a== 0 && m %b==0)
            {
                cout <<"lcm is: "<< m;
                break;

            }
        }
    }
    else if (b > a && a>0 && b>0)
    {
        for (int i = 1; i < b; i++)
        {
            m = b * i;
            // n = b * i;
            if (m %a== 0 && m %b==0)
            {
                cout <<"lcm is: "<< m;
                break;
                
            }
        }
    }else if(a<0 || b<0){
        cout<<"please enter the positive number "<<endl;
        
    }
    return 0;
}