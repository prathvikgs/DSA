#include<iostream>
#include<stdlib.h>
using namespace std;

struct Array
{
    int *a;
    int size;
    int length;
};

void display(struct Array arr)
{
    int i;
    cout<<"The elements are"<<endl;
    
    for(i=0;i<arr.length;i++)
    cout<<arr.a[i]<<" ";
    
}

int main()
{
    int i,n;
    struct Array b;
    cin>>b.size;//taking in the size of the array
    
    b.a=new int[b.size];//describing the size of the array we need
    b.length=0;
    
    cin>>n;
    b.length=n;//how many numbers are gonna be inserted to array
    for(i=0;i<n;i++)
    cin>>b.a[i];
    
    display(b);
    
    
}

