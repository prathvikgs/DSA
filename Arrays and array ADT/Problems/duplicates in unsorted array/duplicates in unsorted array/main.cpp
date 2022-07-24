#include<iostream>
using namespace std;
//can also be done using hash table o(n).
int *unique(int *a,int n,int &m)//returns an array with unique elements
{
    int i,*b,j,flag=0;
    b=new int [n];
    b[0]=a[0];
    m=0;
    for(i=0;i<n;i++)
    {
        for(j=0,flag=0;j<m;j++)
        {
            if(b[j]==a[i])
            {flag=-1;break;}
        }
        
        if(flag!=-1)
        {
            b[m]=a[i];
            m++;
        }
        
    }
    return b;
    
}
int *duplicate(int *a,int n,int &m)
{
    int i,*b,j,flag1=0,flag2=0,k;
    b=new int [n];
    for(i=0,m=0;i<n;i++)
    {
        flag1=0;flag2=0;
        for(j=0,flag1=0;j<i;j++)
        {
            if(a[j]==a[i])
            {flag1=-1;break;}
            
        }
        
        if(flag1==-1)
        {
            for(k=0;k<m;k++)
            {
                if(a[i]==b[k])
                {flag2=-1;break;}
            }
        }
        
        if(flag1==-1 && flag2==0)
        {
            b[m]=a[i];
            m++;
        }
    }
    
    return b;
}
void dup(int a[],int n)
{
    int i,j,count;
    
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j] && a[i]!=-1)
            {
                count++;
                a[j]=-1;
            }
        }
        
        if(count>1)
            cout<<"the element "<<a[i]<<" is duplicate is present "<<count<<" times "<<endl;

    }
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
    int a[]={8,3,6,4,6,5,6,8,2,7},*d,m,n,*u,s;
    n=sizeof(a)/sizeof(a[0]);
    u=unique(a, n, m);
    disp(u, m);
    d=duplicate(a, n, s);
    disp(d, s);
    dup(a, n);
}
