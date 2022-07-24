//finding duplicates
#include<iostream>
using namespace std;

void disp(int *b,int n);

int *unique(int *a,int n,int &size)//functions which gives unique elements in a sorted array
{
    int i,*b,count,j,c[n];
    b=new int[n];
    for(i=0;i<n;i++)
    b[i]=0;
    b[0]=a[0];
    for(i=1,j=1,count=1;i<n;i++)
    {
        
        if(a[i]==a[i-1])
        {
            count++;
            c[i-count]=a[i];
        }
        else
        { count=1;b[j]=a[i];j++;}
    }
    size=j;
    return b;
}

int *duplicate(int *a,int n,int &size)//return an array with duplicates
{
    int i,lastd=a[0],j,*b;
    b=new int [n];
    b[0]=a[0];
    for(i=1,j=1;i<n;i++)
    {
        if(a[i]==a[i-1] && lastd!=a[i])
        {
            b[j]=a[i];
            j++;
            lastd=a[i];
        }
    }
    size=j;
    return b;
}
void counting(int a[],int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        if(a[i]==a[i-1])
        {
            j=i;
            while(a[i]==a[j])j++;
            cout<<a[i]<<" is appering "<<j-i<<" time "<<endl;
            i=j;
        }
    }
}
void disp(int *b,int n)
{
    for(int i=0;i<n;i++)
    cout<<b[i]<<" ";
    cout<<endl;
}
int main()
{
    int a[]={1,3,3,6,8,10,10,12,15,15,15,15,20,20,21},*d,*u,m,size;
    int n=sizeof(a)/sizeof(a[0]);
    disp(a,n);
    u=unique(a,n,m);
    d=duplicate(a,n,size);
    disp(u,m);
    disp(d,size);
}
