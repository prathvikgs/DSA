//code for finding missig elements in an array when unsorted
#include<iostream>
using namespace std;

int *missing(int *a,int n)//O(N)
{
    int *b,i,m;
    m=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>m)
            m=a[i];
    }
    b=new int [m];
    
    for(i=0;i<m;i++)
    b[i]=0;
    
    for(int i=0;i<n;i++)
    {
        b[a[i]-1]++;//called hashing/bitset
    }
    
    return b;
}

int main()
{
    int a[]={3,7,4,9,12,6,1,11,2,10},i,max;
    int n=sizeof(a)/sizeof(a[0]);
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    
    int *b;
    for(i=0;i<max;i++)
    b=missing(a,n);
    cout<<"missing elements are"<<endl;
    for(i=0;i<max;i++)
    {
        if(b[i]==0)
            cout<<i+1<<" ";
    }
}
