#include<iostream>
using namespace std;

void find_pair(int a[],int n,int k)//O(N*N)
{
    int i,j;
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==k)
            {
                cout<<"the pair is "<<a[i]<<","<<a[j]<<endl;
                break;
            }
        }
    }
}


int max(int a[],int n)
{
    int i,m=a[0];
    for(i=1;i<n;i++)
    if(a[i]>m)
        m=a[i];
    
    return m;
}


void hash_pair(int *a,int n,int k)//need a large memory ,Time-O(max(a)),space-O(max(a))
{
    int *b,i,m=max(a,n);
    b=new int[m];
    for(i=0;i<m;i++)
    b[i]=0;
    for(i=0;i<n;i++)
    {
        b[a[i]]++;
    }
    
    for(i=0;k/2-i>=0 && (k+1)/2+ i+k%2<m;i++)
    {
        if(b[k/2 -i-(k+1)%2]>0 && b[(k+1)/2 +(k+1)%2+i]>0)
            cout<<"the pair is "<<k/2 -i-(k+1)%2 <<","<<(k+1)/2 +(k+1)%2+i <<endl;
    }
}
void hash_pair2(int *a,int n,int k)//O(max(a))
{
    int *b,i,m=max(a,n);
    b=new int[m];
    for(i=0;i<m;i++)
    b[i]=0;
    for(i=0;i<n;i++)
    {
        b[a[i]]++;
    }
    
    for(i=0;i<n;i++)
    {
        if(b[k-a[i]]!=0 && k-a[i]>=0)
        {
            cout<<"the pair is "<<a[i]<<","<<k-a[i]<<endl;
            b[a[i]]=0;
        }
    }
}


int main()
{
    int a[]={6,3,8,10,16,7,5,2,9,14,0,8},n;
    n=sizeof(a)/sizeof(a[0]);
    
    find_pair(a, n, 16);
    cout<<endl;
    hash_pair2(a, n, 16);
    cout<<endl;
    hash_pair(a, n, 16);
    
}
