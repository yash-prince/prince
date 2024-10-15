#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "no of elements u want to stored: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the [" << i + 1 << "] element :";
        cin >> arr[i];
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << "this is a duplicate number" << endl;
                break;
            }
        }
    }
    return 0;
}