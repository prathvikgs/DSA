//worst case is improved here in linear search
#include<iostream>
using namespace std;

int search(int *a,int n,int key)
{
    int left=0,right=n-1,pos=-1;
    
    for(left=0;left<=right;)
    {
        if(a[left]==key)
        {
            pos=left;
            break;
        }
        if(a[right]==key)
        {
            pos=right;
            break;
        }
        
        left++;
        right--;
    }
    
    return pos;
}
void display(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}

int main()
{
    int i,n,key,position;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    
    display(a,n);
    cout<<"enter The element you waznt to search"<<endl;
    cin>>key;
    position=search(a,n,key);
    if(position!=-1)
    cout<<"the element "<<key<<" is at the index "<<position<<endl;
    else cout<<"It is not present"<<endl;
}
