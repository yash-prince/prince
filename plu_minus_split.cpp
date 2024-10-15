#include<iostream>
using namespace std;
int sum1=0;
int sum(int b[],int a){
    for (int i = 0; i < a; i++)
    {
        if(b[i]== '+'){
            b[i]=1;
        }
        else if(b[i]== '-'){
            b[i]=-1;
        }
        sum1=sum1+b[i];
    }
    return sum1;
}
int main(){
    int n;
    cout<<"the no string u want to take: "<<endl;
    cin>>n;
     cout<<"STRING SHOULD BE COMBINATION OF + AND - ONLY: "<<endl;
    for (int i= 0; i < n; i++)
    {
        int m;
        string s;
        cout<<"enter the length of "<<i+1<<" string "<<endl;
        cin>>m;
        cout<<"enter the string: "<<endl;
        cin>>s;
        int arr[m];
        for (int j = 0; j < s.length() ; j++)
        {
            arr[j] = s[j];
        }
         cout<<"elments of ur array is: ";
        for (int  b = 0; b < m; b++)
        {
            cout<<arr[b]<<" ";
        }
        
        cout<<" split an array: "<<endl;
        int p;
        cout<<" enter the no of array in which u want to split: "<<endl;
        cin>>p;
        for (int a = 0; a<p; a++)
        {
            
        }
        
        sum(arr,m);
    }
    
    return 0;
}