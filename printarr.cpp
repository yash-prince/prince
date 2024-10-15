#include <iostream>
using namespace std;

class student
{
    int age;
    float marks;

public:
    student() {}
    student(int &m, float &n)
    {
        age = m;
        marks = n;
        int j = 0;
        int arr[j] = {age};
        int sum = 0;
        sum = +arr[j];
        j++;
        int a = 0;
        float arr1[a] = {marks};

        float sum1 = 0.0;
        sum1 = +arr[a];
        a++;
    }
};

int main()
{
    int n;
    int m;
    student s;
    cout << "enter the number of student u want to storeed: ";
    cin >> n;
    m = n;
    int arr[n];
    float arr1[m];
    for (int i = 1; i <= n; i++)
    {
        cout << "age of the student" << i << ": ";
        cin >> arr[i];
        for (int k = i; k < i + 1; k++)
        {
            cout << "enter the marks of thr student " << k << ": ";
            cin >> arr1[k];
            student s(arr[i], arr1[k]);
        }
    }
    student s1(s);

    return 0;
}