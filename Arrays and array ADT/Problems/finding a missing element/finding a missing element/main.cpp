#include<iostream>
using namespace std;

int missing_ap(int *a,int n)//we should knwo the first and last number(genral methid)
{
    int f,l,i,sum;
    l=a[n-1];f=a[0];
    //sum of AP is n/2 *(a+l) n-> no of terms in ap and a is first and l is last term
    for(i=0,sum=0;i<n;i++)
    sum+=a[i];
    
    return (n+1)/2 *(f+l)-sum;
}
int miss(int *a,int n)
{
    int i,sum;
    for(i=0,sum=0;i<n;i++)
    {
        sum+=a[i];
    }
    
    return a[n-1]*(a[n-1]+1)/2 - sum;//sum if first n natural numbers us n*(n+1)/2
}

void multi_miss(int *a,int n,int *c,int &count)//good only for natuaral numbers,O(n*n)
{
    int i,d=a[0],j=0;
    for(i=0;i<n;i++)
    {
        if(a[i]-i!=d)
        {
            for(d=d;d<a[i]-i;)
            {
                c[j]=d+i;
                d++;
                j++;
            }
           
        }
    }
    count=j;
}

void mis(int *a,int n,int *c,int &count)//o(n)
{
    int i=a[0],j,k;
    for(i=a[0],j=0,k=0;i<a[n-1];i++)
    {
        if(i==a[j])
            j++;
        else
        {
            c[k]=i;
            k++;
        }
    }
    count=k;
}
void disp(int *a,int n)
{
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}

int main()
{
    int a[]={6,10,21},m;
    int n=sizeof(a)/sizeof(a[0]);
    int c[a[n-1]];//remember that missing elements maybe more than no of elements in a
    disp(a, n);
    mis(a,n,c,m);
    disp(c,m);//missing elements
}
