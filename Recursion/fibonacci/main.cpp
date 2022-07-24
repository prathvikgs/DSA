#include <iostream>
#include<chrono>
using namespace std::chrono;
using namespace std;
int fib1(int n)//time complexity O(2^n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else return fib1(n-1)+fib1(n-2);
}

int fib2(int n)//time complexity O(n)
{
    int a[n],i;
    for(i=0;i<n;i++)
    a[i]=-1;
    
    if(n==0)
    {a[0]=0;return 0;}
    else if(n==1)
    {a[1]=1;return 1;}
    
    else
    {
        if(a[n-2]==-1)
            a[n-2]=fib2(n-2);
        if(a[n-1]==-1)
            a[n-1]=fib2(n-1);
        
        a[n]=a[n-2]+a[n-1];
        return a[n];
    }
    
}
int fib3(int n)//O(n)
{
    int t0=0,t1=1,i,k;
    if(n<=1) return n;
    else
        
    {
        for(i=2;i<=n;i++)
        {
            k=t0;
            t0=t1;
            t1=k+t0;
        }
        return t1;
    }
    
}

int main()
{
    auto start1=high_resolution_clock::now();
    cout<<fib2(25)<<endl;
    auto stop1=high_resolution_clock::now();
    auto duration1=duration_cast<microseconds>(stop1-start1);
    cout<<duration1.count()<<endl;
    
    auto start2=high_resolution_clock::now();
    cout<<fib1(25)<<endl;
    auto stop2=high_resolution_clock::now();
    auto duration2=duration_cast<microseconds>(stop2-start2);
    cout<<duration2.count()<<endl;

    auto start3=high_resolution_clock::now();
    cout<<fib3(25)<<endl;
    auto stop3=high_resolution_clock::now();
    auto duration3=duration_cast<microseconds>(stop3-start3);
    cout<<duration3.count()<<endl;


}
