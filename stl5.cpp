//....range based loop...and auto keyword...
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v ={2,3,4,5};
    //...first type to print vector
     for (int i = 0; i < v.size(); i++)
     {
        cout<<v[i]<<" ";
     }
     cout<<endl;
//...second type to print vector..using iterator
// vector<int>  :: iterator it;
for ( auto it= v.begin(); it < v.end(); it++)//....auto keyword automatically detct the what the type of it.
{
    cout<<(*it)<<" ";
}
cout<<endl;
//....third way to print using range based loop....and this can b used in any container
for(int & value : v)// ...here we are taking actual value of vector by using referance
{
    value++;
    cout<<value<<" ";
}
cout<<endl;
for(int value : v)//..here value is directly coping the vector...not coming actual value

{
    // value++;
    cout<<value<<" ";
}
/* ....AUTO keyword....
it will automatically detect the data type..
like ..here a will be a integer data type
*/
auto a=1;
    return 0;
}