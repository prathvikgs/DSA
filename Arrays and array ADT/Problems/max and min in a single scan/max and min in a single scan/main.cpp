#include<iostream>
using namespace std;

void min_max(int a[],int n,int &max,int &min)
{
    int i;
    max=a[0];min=a[0];
    
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
        else if(a[i]<min)
            min=a[i];
    }
    
}

int main()
{
    int a[]={5,8,3,9,6,2,10,7,-1,4},n,min,max;
    n=sizeof(a)/sizeof(a[0]);
    min_max(a,n,max,min);
    
    cout<<"min and max are "<<min<<" and "<<max<<" respectively";
}
