#include<iostream>
using namespace std;
int exp(int m,int n)
{
    if (n==0)
        return 1;
    else return m*exp(m,n-1);
}

int pow(int m,int n)
{
    if(n==0)return 1;
    if(n%2==0)
        return pow(m*m,n/2);
    else return m*pow(m*m,(n-1)/2);
        
}
int main()
{
    cout<<exp(4,3)<<endl;
    cout<<pow(2,9)<<endl;
}
