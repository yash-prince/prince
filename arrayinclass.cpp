#include<iostream>
using namespace std;
class shopItem{
    int Id;
    float price;
    public:
    void Setdata(int a, float b){
        Id=a;
        price=b;
    
    }
    void getdata(){
        cout<<"id of this item is: "<<Id<<endl;
        cout<<"price of this item is: "<<price<<endl;

    }
};
int main(){
    int size=3;
    // int *ptr=&size;
    // int *ptr =new int[23];

    //general item
    // veggies item
    //hardware item

    shopItem *ptr =new shopItem [size];
    shopItem *ptrTemp =ptr;
    
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout<<"id of this item "<<i+1<<endl;
        cin>>p;
        cout<<"price of this item is : "<<endl;
        cin>>q;
        (*ptr).Setdata(p,q);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<"item no "<<i+1<<endl;
        (*ptrTemp).getdata();
        ptrTemp++;
    }
    
    return 0;
}