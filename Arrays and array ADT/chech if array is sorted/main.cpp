#include<iostream>
using namespace std;

int is_sorted(int *a,int n)
{
    int i,flag=0;
    
    for(i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {flag=-1;break;}
    }
    
    return flag;
}

void insert_in_sorted(int *a,int &n,int e)
{
    int i;
    for(i=n-1;i>=0;i--)
    {
        if(a[i]>e)
        {
            a[i+1]=a[i];
        }
        if(i==0)
            a[i]=e;
        else if(a[i]<=e)
        {
            a[i+1]=e;break;
        }
        
    }
    n++;
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
    int a[]={4,8,13,16,20,25,28,33},n,b[]={4,8,13,1,16,20,25,28,33};
    n=8;
    disp(a,n);
    cout<<is_sorted(a,n)<<endl;
    insert_in_sorted(a,n,180);
    disp(a,n);
    
    disp(b,n);
    cout<<is_sorted(b,n+1)<<endl;
    
}
