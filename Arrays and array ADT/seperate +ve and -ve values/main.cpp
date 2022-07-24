#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void seperate(int *a,int n)
{
    int i,p=0,ne=0,pos[n],neg[n];
    
    for(i=0;i<n;i++)
    {
       if(a[i]>=0)
       { pos[p]=a[i];p++;}
        
       else
       {
           neg[ne]=a[i];ne++;
           
       }
    }
    
    for(i=0;i<n;i++)
    {
        if(i<p)
            a[i]=pos[i];
        else
            a[i]=neg[i-p];
    }
    
}

void sep(int *a,int n)//the correct code with correct order,O(N)
{
    int i=0,j=n-1;
    
    for(i=0,j=n-1;i<=j;)
    {
        while(a[i]<0)i++;
        while(a[j]>=0)j--;
        if(i<j)
        swap(a[i],a[j]);
    }
    
}

void disp(int *a,int n)
{
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}

int main()
{
    int a[]={-6,3,-8,10,5,-7,-9,12,-4,2},n=10,b[]={-6,3,-8,10,5,-7,-9,12,-4,2};
    
    disp(a,n);
    seperate(a,n);
    disp(a,n);
    
    disp(b, n);
    sep(b, n);
    disp(b, n);
}
