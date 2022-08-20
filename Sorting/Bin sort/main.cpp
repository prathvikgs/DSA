#include<iostream>
using namespace std;

void disp(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int Max(int a[],int n)
{
    int i,max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>=max)
        max=a[i];
    }
    return max;
}

struct node
{
    int data;
    node *next;
};

//Inserting in a node
void insert(node *&p,int key,int index)
{
    node *t,*first;
    first=p;

    t=new node;
    t->data=key;
    t->next=NULL;
    int i=0;

    if(index==0)
    {

        t->next=first;
        first=t;   
        p=first;
    }
    
    else
    {
        for(i=0;i<index-1 &&p!=NULL;i++)
        {
            p=p->next;
        }
        t->next=p->next;
        p->next=t;

        p=first;

    }
}
// Deleting a node and returns its value
int delete_node(node *&p,int index)
{
    node *first=p,*q=NULL;
    int i=0,x=0;
    if(index==0)
    {
        x=p->data;
        first=p->next;
        delete p;
        p=first;
    }

    else
    {
        while(i<index)
        {
            q=p;
            p=p->next;
            i++;
        }
        x=p->data;
        q->next=p->next;
        delete p;
        p=first;

    }

    return x;
}


//Binsort algorithm
void binsort(int a[],int n)
{
    int max=Max(a,n),i,j;

    node **bins;
    bins=new node*[max+1];//array of pointers to ll

    for(i=0;i<max+1;i++)
    {
        bins[i]=NULL;
    }

    for(i=0;i<n;i++)
    {
        insert(bins[a[i]],a[i],0);
    }
    i=0;j=0;

    while(i<max+1)
    {
        while(bins[i]!=0)
        {
            a[j++]=delete_node(bins[i],0);
        }
        i++;
    }
}

int main()
{
    int a[7]={5,0,4,3,2,1,9};
    disp(a,7);
    binsort(a,7);
    disp(a,7);
}