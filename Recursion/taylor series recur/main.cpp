//
//  main.cpp
//  taylor series recur

#include<iostream>
using namespace std;

float e(int x,int n)
{
    static int f=1,p=1;
    float r;
    if(n==0)
        return 1;
    else
    {
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        
        return r+((float)p/f);
    }
}
/*horner's rule in loop*/
float hl(int x,int n )
{
    float k;
    for(k=1;n>0;n--)
    {
        k=1+ k*(float)x/(n);
    }
    return k;
}
/*horner's rule in recursion*/

int main()
{
    cout<<e(4,30)<<endl;
    cout<<hl(4,30)<<endl;
}
