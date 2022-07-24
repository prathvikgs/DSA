#include<iostream>
using namespace std;

int binary_search(int a[],int n,int k,int l,int r)
{
    int mid;
    
    while(l<=r)
    {
        mid=(l+r)/2;
        
        if(k<a[mid])
            r=mid-1;
        else if(k>a[mid])
            l=mid+1;
        else
            return mid;
            
    }
    return -1;
}

void pair_in_sorted(int a[],int n,int k)//O(n*log(n))
{
    int i,u;
    
    for(i=0;i<n;i++)
    {
        u=binary_search(a,n,k-a[i],i+1,n-1);
        if(u!=-1)
            cout<<"the pairs present are "<<a[i]<<","<<a[u]<<endl;
        
    }
}

void pair_better(int a[],int n,int k)//O(n)
{
    int i=0,j=n-1,sum;
    
    while(i<j)
    {
        sum=a[i]+a[j];
        
        if(sum>k)
            j--;
        else if(sum<k)
            i++;
        else if(sum==k)
        {
            cout<<"these form the pair "<<a[i]<<","<<a[j]<<endl;
            i++;
            j--;
        }
    }
}

int main()
{
    int a[]={1,2,3,4,5,6,8,9,10,12,14},n;
    n=sizeof(a)/sizeof(a[0]);
    
    pair_in_sorted(a, n, 10);
    pair_better(a, n, 21);
    
}
