#include<iostream>
using namespace std;

int main(){
int n;
 int k=0;
cout<<"the no of element u want to stored: ";
cin>>n;
int arr[n];
int arr1[n];
for (int i = 0; i < n; i++)
{
    cout<<"the ["<<i+1<<"]";
    cin>>arr[i];
    for (int  j = 0; j < i; j++)
    {
        if (arr[i]<=arr[j])
        {
           
            arr1[k]=arr[i];
            k++;
        }
        // else{
        //     m=arr[j];
        // }
        
    }
    
}
for (int b = 0; b < n; b++)
{
    cout<<arr1[b]<<",";
}


    return 0;
}