/*Using merge algoritm for different uses and cases*/
#include<iostream>
using namespace std;

void union_sorted(int *a,int n,int *b,int m,int *c,int &len)
{
    int i,j,k;
    for(i=0,j=0,k=0;j<n&&k<m;)
    {
        if(a[j]<b[k])
        {
            c[i]=a[j];
            j++;i++;
        }
        else if(a[j]>b[k])
        {
            c[i]=b[k];
            k++;i++;
        }
        else
        {
            c[i]=a[j];
            j++;k++;i++;
        }
    }
    
    for(;j<n;j++,i++)
    c[i]=a[j];
    for(;k<m;k++,i++)
    c[i]=b[k];
    len=i;//keep in mind that i is incrmented befor terminating
}

int l_search(int *a,int n,int k)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
            return true;
    }
    
    return false;
}
void union_unsorted(int *a,int n,int *b,int m,int *c,int &l)
{
    int i,j,k;
    for(i=0,k=0;i<n;i++)
    {
        c[i]=a[i];
    }
    for(j=0;j<m;j++)
    {
        if(l_search(a,n,b[j])==0)
        {
            c[i]=b[j];
            i++;
        }
    }
    l=i;
}

void intersection(int *a,int n,int *b,int m,int *c,int &l)
{
    int i,j,k;
    for(i=0,j=0,k=0;j<n&&k<m;)
    {
        if(a[j]==b[k])
        {
            c[i]=a[j];
            i++;
            j++;
            k++;
        }
        else if(a[j]<b[k])
            j++;
        else k++;
    }
    l=i;
    
}
void disp(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}

int main()
{
    int a[]={1,5,6,7,10,21,45},b[]={-6,-10,5,6,10,45},n,m,l;
    n=sizeof(a)/sizeof(a[0]);m=sizeof(b)/sizeof(b[0]);
    int c[n+m];
    disp(a, n);
    disp(b, m);
    //union_sorted(a, n, b, m, c,l);
    //disp(c,l);
    intersection(a, n, b, m, c, l);
    disp(c,l);
}

