//transposition and move to front
#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
    
}

void display(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}

int transposition_search(int *a,int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
           if(i==0)
               return i;
            else
            {
                swap(a[i], a[i-1]);
                
                return i-1;
            }
        }
    }
    
    return -1;
}

int move_for_search(int *a,int n,int key)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            swap(a[i], a[0]);
            return 0;
        }
    }
    
    return -1;
}

int main()
{
    int n,key,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    display(a, n);
    cin>>key;
    transposition_search(a, n, key);
    display(a,n);
    transposition_search(a, n, key);
    display(a, n);
    move_for_search(a, n, key);
    display(a, n);
    
}
