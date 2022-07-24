#include<iostream>
using namespace std;

int main()
{
    int *p,*q;
    p=new int[5];q=new int[10];
    
    //now copy the elements from p to q
    for(int i=0;i<10;i++)
    p[i]=i*i;
    
    for(int i=0;i<5;i++)
    q[i]=p[i];
    
    delete []p;//deleting p
    
    p=q; //making p point on q
    
    //now this array is being pointed by both p and q so remove q
    
    q=NULL;
    
    for(int i=0;i<10;i++)
    cout<<p[i]<<" ";
    
}
