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

//countsort algorithm
void countsort(int a[],int n)
{
    int  max,i,j;
    max=a[0];
    //finding the maximum element
    for(i=0;i<n;i++)
    {
        if(a[i]>=max)
        max=a[i];
    }

    int b[max+1]={0};
    
    //indexing and storing
    for(i=0;i<n;i++)
    {
        b[a[i]]++;
    }
    
    //copying back
    for(i=0,j=0;i<max+1;i++)
    {
        while(b[i]!=0)
        {
            a[j]=i;
            b[i]--;
            j++;
        }

    }
    
}

int main()
{
    int a[7]={5,0,4,3,2,1,9};
    disp(a,7);
    countsort(a,7);
    disp(a,7);
}

/*
Time complexity O(n+k), k is the range of outputs
countsort is efficient if the range of input is not significantly large than the no of objects to be sorted
-It can be extended to work for -ve inputs as well
-Not a stable algo
-Space onsuming algo

*/