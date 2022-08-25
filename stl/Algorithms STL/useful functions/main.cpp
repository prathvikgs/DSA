#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int a=1,b=4;
    cout<<"a="<<a<<",b="<<b<<endl; 

    swap(a,b);
    cout<<"a="<<a<<",b="<<b<<endl;

    cout<<max(a,b)<<endl;

    cout<<min(a,b)<<endl;

    int arr[]={1,2,3,4,5,6,7,8};

    reverse(arr,arr+8);

    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

     reverse(arr,arr+8);
     for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    next_permutation(arr,arr+8);
    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<" ";
    }

}