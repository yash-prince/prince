#include <iostream>
using namespace std;
int main()
{
    int n;
    
    cout << "enter the number of elements u want to store:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the elements:arr[" << i << "]";
        cin >> arr[i];
    }
    cout << "the elements before is:";
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << ",";
    }
    int *m;
    for (int k = 0; k < n; k++)
    {
        *(m+n-1-k) = arr[k];
    }
    cout << "array after the reverse: ";
    for (int b = 0; b < n; b++)
    {
        cout << *(m+b);
    }

    return 0;
}