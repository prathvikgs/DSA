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

void selection_sort(int a[],int n)
{
    int i,j,k,min,key;

    for(i=0;i<n;i++)
    {
        k=a[i];
        min=a[i];
        key=i;
        for(j=i;j<n;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                key=j;
            }
        }

        a[i]=min;
        a[key]=k;
    }
}
int main()
{
    int a[5]={5,0,-4,3,2};
    disp(a,5);
    selection_sort(a,5);
    disp(a,5);
}
/*
Here we repeatedly find the minimum element from unsorted 
part and put it at the beginning.So, the algo has 2 subarrays in the array 
1) The sorted part
2) The unsorted part
In each iteration, the minimum element in the unsorted array is moved to the sorted array
Time Complexity- O(n2)
Stability- Default is not stable,  but can be made stable.
-It is not an adaptive algorithm,always takes O(n2)
We can get the Kth smallest element by k iterations of i
