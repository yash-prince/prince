#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int start, int end, int ind)
{
    int i = start;
    int j = end;
    while (i < j)
    {
        while (arr[i] < arr[ind] && i <= j)
        {
            i++;
        }
        while (arr[j] > arr[ind] && j >= i)
        {
            j--;
        }
        while(i < j && arr[i] > arr[j])
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[j], arr[ind]);
    return j;
}
void v(vector<int> &arr, int start, int end, int ind)
{
    if(start<end){
    int pindex = partition(arr, start, end, ind);
    v(arr, start, pindex - 1, start);
    v(arr, pindex + 1, end, pindex + 1);
    }
    else if(start==end){
       return; 
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    v(a, 0, n-1 , 0);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}