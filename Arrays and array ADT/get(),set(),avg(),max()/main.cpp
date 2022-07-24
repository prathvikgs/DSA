#include<iostream>
using namespace std;

int get(int *a,int n,int index)//getting an element at a particular index
{
    if(index>=0 && index<n)
        return a[index];
    else return -1;
}

void set(int *a,int index,int value)//setting a vvalue for a particular index
{
    a[index]=value;
}

int max(int *a,int n)//O(n),returns the largest element in the array,similar for min
{
    int i,max;
    max=a[0];
    
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    return max;
}

int sum(int *a,int n)//sum of elements in an array loop method,O(N)
{
    int i,sum;
    sum=0;
    for(i=0;i<n;i++)
    sum+=a[i];
    
    return sum;
}

int Rsum(int *a,int n)//recursive method for sum
{
    if(n<=0)
        return 0;
    
    else return a[n-1]+sum(a,n-1);
    
}

void display(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}

int main()
{
    int a[]={1,6,2,-4,0,11},n;
    n=sizeof(a)/sizeof(a[0]);
    
    display(a, n);
    
    cout<<get(a,n,2)<<endl;
    
    set(a,2,9);
    
    display(a, n);
    
    cout<<max(a,n)<<endl;
    
    cout<<Rsum(a,n)<<endl;//recursive sum
    cout<<sum(a,n)<<endl;//loop sum
}
