#include<iostream>//tower of hanoi
using namespace std;

int solve(int n)//for number of steps
{
    if (n==1)
        return 1;
    else return 2*solve(n-1)+1;
}

void toh(int n,int a,int b,int c)//from a to c using b
{
    if(n==1)
    {
        cout<<"from "<<a<<" to "<<c<<endl;
    }
    else
    {
        toh(n-1,a,c,b);
        toh(1,a,b,c);
        toh(n-1,b,a,c);
        
    }
    
}
void toh2(int n,int a,int b,int c)//from a to c using b
{
    if(n>0)
    {
        toh2(n-1,a,c,b);
        cout<<a<<" to "<<c<<endl;
        toh2(n-1,b,a,c);
        
    }
    
}

int main()
{
    int x=3;
    cout<<solve(x)<<endl;
    toh(x,1,2,3);
    toh2(x,1,2,3);
}
