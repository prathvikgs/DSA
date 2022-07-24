
#include<iostream>
using namespace std;

// linear search,O(N)
int search(int a[],int n,int key)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
          return i;
    }
    
    return -1;
}
//print the elements
void display(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}


int main()
{
    int n,i,k,l;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    display(a, n);
    cin>>k;
    l=search(a,n,k);
    
    cout<<l<<endl;
}
