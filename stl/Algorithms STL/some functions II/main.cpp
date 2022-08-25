#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int a[]={1,4,3,53,24,3},i;

    for(i=0;i<6;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    rotate(a,a+3,a+6);
    
    for(i=0;i<6;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}