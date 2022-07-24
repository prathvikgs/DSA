#include<iostream>
using namespace std;

int ncr(int n,int r)//O(r)
{
    if(r==0)
        return 1;
    
    else if(r==1)
        return n;
    
    else return n*ncr(n-1,r-1)/r;
}
int ncr2(int n,int r)
{
    if(r==0)
        return 1;
    else if(r==1)
        return n;
    else return ncr(n-1,r)+ncr(n-1,r-1);
}
int main()
{
    cout<<ncr(5,2)<<endl;
    cout<<ncr2(5,2)<<endl;
}
