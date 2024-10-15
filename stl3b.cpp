//....Array of vectors.....
#include <bits/stdc++.h>
using namespace std;
void printVec(vector<int> v)
{
    cout << "the size of the vector: " << v.size() << endl;
    cout << "elements in vector: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " ;
    }
}
int main()
{
    int n;
    cout << "the no of vectors: " << endl;
    cin >> n;
    vector<int> v[n];
    for (int i = 0; i < n; i++)
    {
        int m;
        cout << "the no of elements u want to stored in " << i + 1 << " vector: " << endl;
        cin >> m;
        cout << "enter the element: " << endl;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    for (int i = 0; i < n; i++)
    {
        printVec(v[i]);
        cout<<endl;
    }
    cout<<v[0][1];//it mean that 2 element of oth vector.  

    return 0;
}