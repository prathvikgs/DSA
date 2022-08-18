#include<iostream>
using namespace std;

void insertion_sort(int a[],int l,int r)
{
    int  i,j,k;

    for(i=l;i<r+1;i++)
    {
        j=i-1;
        k=a[i];

        while(a[j]>k && j>=l)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=k;
    }

}

void disp(int a[],int n)
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
    int a[5]={5,0,-4,3,2};
    disp(a,5);
    insertion_sort(a,0,4);
    disp(a,5);
}
/*
Array is split into sorted and unsorted part,values from the unsorted paer 
are picked and placed at the correct position in the sorted ppart,initially sorted part is NULL.
Better for linked lists
-it is adaptive
-it is stable

Can be used when the number of elements is small. Also when the input array is almost sorted.
(i.e when few elements are misplaced in complete big array)
O(n2) time complexity
In place sorting algorithm (does ot need extra space (though some small extra space is allowed))
*/
