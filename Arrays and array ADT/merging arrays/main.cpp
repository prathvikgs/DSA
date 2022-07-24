//Time complexity is O(m+n)
#include<iostream>
using namespace std;


int *mer(int *a,int n,int *b,int m)//also method to return an array from function.
{
    int i,j,k,*c;
    c=new int [m+n];
    
    for(i=0,j=0,k=0;j<n &&k<m;i++)
    {
       if(a[j]<b[k])
       {
           c[i]=a[j];
           j++;
       }
        else
        {
            c[i]=b[k];
            k++;
        }
    }
    
    for(;j<n;)
    c[i++]=a[j++];
    for(;k<m;)
    c[i++]=b[k++];
    
    return c;
}

void disp(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}


int main()
{
    int a[]={3,8,16,20,25,26,40,43},*q;
    int n=sizeof(a)/sizeof(a[0]);
    int b[]={4,10,12,22,23};
    int m=sizeof(b)/sizeof(b[0]);
    disp(a,n);
    disp(b,m);
    
    q=mer(a,n,b,m);
    disp(q,n+m);
}
