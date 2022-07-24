#include <cmath>
#include <iostream>
using namespace std;


int main()
{
    //method for creating a 2d array (variable sized)(using array of pointers)
    int n,q,i,j,l;
    cin>>n>>q;
    int *a[n];
    for(i=0;i<n;i++)
    {
        int k;
        cin>>k;
        a[i]=new int[k];
        
        for(j=0;j<k;j++)
        cin>>a[i][j];
    }
    for(l=0;l<q;l++)
       {
           cin>>i>>j;
           cout<<a[i][j]<<endl;
       }
    
    //using double pointers
    
    int **b;//created inside stack
    
    b=new int *[3];//array of pointers
    
    b[0]=new int [3];
    b[1]=new int [2];
    b[2]=new int [4];
    
    //here everything is in heap,only **b is in stack
}

