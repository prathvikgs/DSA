#include<iostream>
using namespace std;

struct node
{
    node *prev;
    int data;
    node *next;
};

//Creating an doubly linked list using an array, if we want we can krrp the last node link as well
node *create(int *a,int n)
{
    node *t,*first,*last;
    first=new node;

    first->prev=0;
    first->data=a[0];
    first->next=0;
    last=first;

    int i;
    for(i=1;i<n;i++)
    {
        t=new node;
        t->data=a[i];
        t->prev=last;
        t->next=0;
        last->next=t;
        last=t;
    }

    return first;
}

//Display
void disp(node *p)
{
    while(p!=0)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
   cout<<endl;
}


//Inserting in a doubly linked list
void insert(node *&p,int index,int k)
{
    node *first=p,*t;
    t=new node;
    t->prev=0;
    t->data=k;
    t->next=0;

    if(index==0)
    {
        t->next=p;
        p->prev=t;
        first=t;
        p=first;
    }

    else
    {
        int i;
        for(i=0;i<index-1;i++)
        {
            p=p->next;
        }

        t->next=p->next;
        p->next!=NULL?p->next->prev=t:NULL;
        p->next=t;
        t->prev=p;
        p=first;
        
    }
}

//Deleting from a doubly linked list
void delete_node(node *&p,int index)
{
    node *first=p,*q=0;
    if(index==0)
    {
        first=p->next;
        first->prev=NULL;
        delete p;
        p=first;
    }

    else
    {
        int i;
        for(i=0;i<index;i++)
        {q=p;p=p->next;}

        q->next=p->next;
        p->next!=0?p->next->prev=q:NULL;
        delete p;
        p=first;
    }
}

//reverse a doubly LL
void reverse(node *&p)
{
    node *temp,*first=p;

    while(p!=NULL)
    {
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;

        p=p->prev;
        if(p!=0 && p->next==0)
        first=p;
    }
    p=first;
}
int main()
{
    int a[4]={1,4,3,5};
    node *p=create(a,sizeof(a)/sizeof(a[0]));
    disp(p);
    reverse(p);
    disp(p);
    
    insert(p,4,10);
    insert(p,0,0);
    insert(p,3,-1);
    disp(p);
    delete_node(p,0);
    delete_node(p,5);
    delete_node(p,3);
    disp(p);
    reverse(p);
    disp(p);

}
