//inserting
#include<iostream>
using namespace std;

void insert(int a[],int &n,int index,int ele)//function for inserting an element O(n)
{
    int i;
    
    for(i=n;i>index;i--)
    {
        a[i]=a[i-1];
    }
    
    a[index]=ele;
    n++;
}

int main()
{
    int size,i,length;
    cin>>size>>length;
    
    int a[size];
    
    for(i=0;i<length;i++)
    cin>>a[i];
    
    for(i=0;i<length;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    int ele,ind;
    cin>>ind>>ele;
    
    insert(a,length,ind,ele);
    
    cout<<length<<endl;
    
    for(i=0;i<length;i++)
    cout<<a[i]<<" ";
    
}
