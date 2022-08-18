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

void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
 
//Partitioning the array at the pivot (here we take the pivot as the low element)
int partition(int a[],int l,int r)
{
    int pivot=a[l];
    int i=l,j=r;

    while(i<j)
    {
        while(a[i]<=pivot)
        i++;
        while(a[j]>pivot)
        j--;

        if(i<j)
        swap(a[i],a[j]);
    }
    swap(a[l],a[j]);
    return j;//returns the index of element sorted
}

void quicksort(int a[],int l,int r)
{
    int pivot;
    if(l<r)
    {
        pivot=partition(a,l,r);
        quicksort(a,l,pivot-1);
        quicksort(a,pivot+1,r);
    }
}

int main()
{
    int a[5]={5,0,4,3,2};
    disp(a,5);
    quicksort(a,0,4);
    disp(a,5);
}
/*
Idea is that an element is in a sorted position if all the elements before that 
are smaller and all the elements after that are larger.

We take a pivot element, and take two pointers, one from left extreme and one from
right extreme, we exchange them if they are larger and shorter respectively,
in this way the array is partitioned at pivot.

It is a divide and conquer algorithm.

In partition():
given an array and an element x of the array, a pivot put x at its correct position in a 
sorted array & put all smaller elements in left and all larger ones on the right.O(n)
worst time-O(n2)
best case O(nlog(n))//when the partition happens in the middle

In selection sort, we take an index and find an element while in quicksort we take element and find index
*/
