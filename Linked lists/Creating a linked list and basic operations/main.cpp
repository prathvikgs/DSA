#include<iostream>
using namespace std;

//structure of a node
struct node
{
    int data;
    node *next;
};

//creating a linked list from an array
node *create(int *a,int n)
{
    node *first,*last,*t;
    first=new node;
    first->data=a[0];//the first node
    first->next=0;
    last=first;

    int i;
    for(i=1;i<n;i++)
    {
        t=new node;//creating and adding a node
        t->data=a[i];
        t->next=0;
        last->next=t;
        last=t;//the tail pointer
    }

    return first;

}

//displaying the linked list
void disp(node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

void Rdisp(node *p)
{
    if(p!=NULL)
    {
        cout<<p->data<<" ";
        Rdisp(p->next);
    }
}

//counting no of nodes
int count(node *p)
{
    int c=0;
    while(p!=0)
    {
        c++;
        p=p->next;
    }

    return c;
}

//sum of the elements (loop)
int sum(node *p)
{
    int s=0;
    while(p!=0)
    {
        s+=p->data;
        p=p->next;
    }

    return s;
}

//recursive sum
int rsum(node *p)
{
    if(p==0)
       return 0;
    else
    {
        return p->data+rsum(p->next);
    }

}

//maximum in a LL
int max(node *p)
{
    int max=p->data;

    while(p!=0)
    {
        if(p->data>=max)
        max=p->data;
        p=p->next;
    }
    return max;
}

//recursive max
int rmax(node *p)
{
    int x;
    if(p==0)
    return INT_MIN;
    
    x=rmax(p->next);
    return x>p->data?x:p->data;
    
}

//searching in a LL (iterative),returns the node if found else NULL
node *search(node *p,int key)
{
    while(p!=0)
    {
        if(p->data==key)
        return p;
        p=p->next;
    }

    return NULL;
}

//searching recursively
node *rsearch(node *p,int key)
{
    if(p==0)
    return 0;

    else if(p->data==key)
    return p;

    return rsearch(p->next,key);
}

int main()
{
   
   int a[5]={3,1,-5,6},n=4;
   node *p;
   p=create(a,n);
   disp(p);
   Rdisp(p);
   cout<<"no of nodes are "<<count(p)<<endl;
   cout<<"sum is "<<sum(p)<<" rsum is "<<rsum(p)<<endl;
   cout<<"the max element is "<<max(p)<<" rmax is "<<rmax(p)<<endl;

   node *is;
   //is=new node;
   is=rsearch(p,-5);
   is!=0?cout<<is->data<<endl:cout<<"not found"<<endl;//out puts the key if it's present else not found
}
