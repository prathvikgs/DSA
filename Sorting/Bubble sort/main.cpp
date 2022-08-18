#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void disp(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}
void bubble_sort(int a[],int s,int d)//s->start index,d->end index which should be sorted
{
    int i,j;
    for(i=0;i<d-s+1;i++)
    {
        for(j=s+1;j<=d;j++)
        {
            if(a[j]<a[j-1])
            swap(a[j],a[j-1]);
        }
    }

}
int main()
{
    int a[5]={1,2,0,-3,-4};
    disp(a,5);
    bubble_sort(a,0,4);
    disp(a,5);

}

/*
Called bubble sort beacuse big elements go below and ligter elements come up(like bubbles do).
For the Kth lasrgest element I just pass k times and the kth last element from the last will be the kth largest

Time complexity -O(n2)
min=O(n)
max=O(n2)

It is stable-Order remains the same for the equal numbers
It is adaptive

*/
