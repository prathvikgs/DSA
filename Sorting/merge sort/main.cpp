#include<iostream>
using namespace std;

void disp(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

//Merging 2 sorted arrays into a single array
void merge(int a[],int l,int m,int h)
{
    int i=l,j=m+1,k=0,b[h-l+1];

    for(;i<=m && j<=h;)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            k++;
            i++;
        }

        else
        {
            b[k]=a[j];
            k++;
            j++;
        }
    }

    for(;i<=m;i++,k++)
    b[k]=a[i];

    for(;j<=h;j++,k++)
    b[k]=a[j];

    for(i=l,k=0;i<=h;i++,k++)
    {
        a[i]=b[k];
    }

}

//Iterative merge sort
void mergesort(int *a,int n)
{
    int i,low,mid,high,p;

    for(p=1;p<=n;p=p*2)
    {
        for(i=0;i+p-1<n;i+=p)
        {
            low=i;
            high=i+p-1;
            mid=(high+low)/2;
            merge(a,low,mid,high);
        }       
    }

    if(p/2<n)
    merge(a,0,p/2-1,n-1);
}

//Recursive merge sort
void rmergesort(int a[],int l,int h)
{

    if(l<h)
    {
        int mid=(l+h)/2;
        rmergesort(a,l,mid);
        rmergesort(a,mid+1,h);
        merge(a,l,mid,h);
    }
}

int main()
{
    int a[5]={5,0,-4,3,2};
    disp(a,5);
    rmergesort(a,0,4);
    disp(a,5);
}

/*
Divide and conquer strategy.
The array is initially divided into 2 equal halves and then combined in a sorted manner.
This is a recursive algorithm that continuosly splits the array in half until it cannot be 
further divided.
Merge sort is stable.
Time complexity is O(nlogn)
N auxiliary space is required for merge sort
*/