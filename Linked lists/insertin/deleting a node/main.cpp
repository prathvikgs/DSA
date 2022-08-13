#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *create(int *a,int n)
{
    node *first,*last,*t;
    first=new node;
    first->data=a[0];
    first->next=0;
    last=first;

    int i;
    for(i=1;i<n;i++)
    {
        t=new node;
        t->data=a[i];
        t->next=0;
        last->next=t;
        last=t;
    }

    return first;
}

void disp(node *p)
{
    while(p!=0)
    {
        cout<<p->data<<" ";
        p=p->next;
    }

    cout<<endl;
}

//Inserts the element at a given idex,
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
//Deleting a node
void delete_node(node *&p,int index)
{
    node *first=p,*q=NULL;
    int i=0;
    if(index==0)
    {
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
        q->next=p->next;
        delete p;
        p=first;

    }
}

int main()
{
    int a[5]={1,6,2,4,0};
    node *p=create(a,5);
    disp(p);
    insert(p,10,3);
    disp(p);
    insert(p,1,6);
    disp(p);
    delete_node(p,6);
    disp(p);
}
