#include<iostream>
using namespace std;


int gcd(int a,int b )
{
    if(a==0)
        return b;
    else return gcd(b%a,a);
}

void reverse(int *a,int n)
{
    int i,temp;
    
    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    
}

void left_shift(int *a,int n)
{
    int i;
    
    for(i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    
    a[n-1]=0;//we lose the first element
}


//method-01,rotating by d elements(left rotate)
void rotate(int *a,int n,int d)
{
    int b[d],i,k;
    for(i=0;i<d;i++)
    {
        b[i]=a[i];
    }
    for(i=0;i<n-d;i++)
    {
        a[i]=a[i+d];
    }
    for(i=n-d,k=0;i<n;i++,k++)
    {
        a[i]=b[k];
    }
    
}
//recursion method
void rot(int a[],int n,int d)
{
    int t=a[0],i;
    
    if(d==0)return ;
    else if(d==1)
    {
        for(i=0;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        
        a[n-1]=t;
    }
    
    else
    {
        rot(a,n,1);
        rot(a,n,d-1);
    }
    
}

//method 3-juggling algorithm,it is an extension of method-2
void jug(int *a,int n,int d)
{
    int g=gcd(n,d),i,j,temp,k;
    
    for(i=0;i<g;i++)
    {
        temp=a[i];
        j=i;
        
        while(1)
        {
            k=j+d;
            if(k>=n)
                k=k-n;
            if(k==i)
                break;
            
            a[j]=a[k];
            j=k;
        }
        a[j]=temp;
    }
    
}


void display(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
}

int main()
{
    int a[]={1,2,3},b[]={5,6,2,9};
    
    display(a,3);
    reverse(a,3);
    display(a,3);
    
    display(b, 4);
    reverse(b, 4);
    display(b, 4);
    
    rot(b,4,0);
    display(b, 4);
}
