//  binary search
#include <iostream>
using namespace std;

/*iterative method*/
int binary_search(int *a,int n,int key)
{
    int l=0,r=n-1,mid=(l+r)/2;
    
    for(l=0,r=n-1;l<=r;mid=(l+r)/2)
    {
        
        if(a[mid]==key)
            return mid;
        
        if(a[mid]>key)
        {
            r=mid-1;
            l=l;
        }
        
        else if(a[mid]<key)
        {
            l=mid+1;
            r=r;
        }
        
    }
 
    return -1;
}
//recursive version
int binary(int *a,int n,int l,int r,int k)
{
    int mid=(l+r)/2;
    
    if(l>r)
        return -1;
    
    else if(a[mid]==k)
        return mid;
       
    else if(k<a[mid])
        return binary(a,n,l,mid-1,k);
     
    else
        return binary(a,n,mid+1,r,k);
}

int main()
{
    int a[]={-4,1,2,5,6,9};
    //cout<<binary_search(a,5,0)<<endl;
    cout<<binary(a,6,0,5,9)<<endl;
    
}
