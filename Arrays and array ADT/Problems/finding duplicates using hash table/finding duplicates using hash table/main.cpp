//finding duplicates using hash table,O(max(n,max(a[n))
#include<iostream>
using namespace std;

int *miss(int *a,int n,int &max)
{
    int *b,i,m;
    m=a[0];
    for(i=0;i<n;i++)
    {
        if(m<a[i])
            m=a[i];
    }
    b=new int [m];
    
    for(i=0;i<m;i++)
    b[i]=0;
    
    for(i=0;i<n;i++)
    {
        b[a[i]]++;
    }
    max=m;
    return b;
}

int main()
{
    int a[]={3,6,8,8,10,12,15,15,15,20},n,*h,m,i;
    n=sizeof(a)/sizeof(a[0]);
    h=miss(a,n,m);
    
    for(i=0;i<m;i++)
    {
        if(h[i]>1)
        {
            cout<<"The element "<<i<<" is a duplicate and is present "<<h[i]<<" no of times"<<endl;
        }
    }
    
}
