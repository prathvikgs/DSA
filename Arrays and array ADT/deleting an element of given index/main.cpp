
//deleting an element of given index,O(n)
#include<iostream>
using namespace std;

void display(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}

void delete_index(int a[],int &n,int index)
{
    int i;
    
    for(i=index;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n--;
}

int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    
    display(a,n);
    int x;//index which u want to delete
    cin>>x;
    delete_index(a, n, x);
    display(a,n);
    
}
