#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

//Checking if the linked list has any loops using 2 pointers
bool is_loop(node *p)
{
    node *a=p,*q=p;

    do
    {
        p=p->next;
        q=q->next;
        q=(q!=0?q->next:NULL);

    } while (p!=0 && q!=0 && p!=q);

    if(p==q)
        return true;

    else
       return false;
}

//Creating a circular linked list using array
node *circularnode(int *a,int n)
{
    node *t,*p,*last;
    p=new node;
    p->data=a[0];
    p->next=0;
    last=p;
    int i=0;
    for(i=1;i<n;i++)
    {
        t=new node;
        t->data=a[i];
        t->next=0;
        last->next=t;
        last=t;
    }

    last->next=p;
    return p;
}


//displaying a circular node
void disp_circular(node *p)
{
    node *head=p;
    do
    {
        cout<<p->data<<" ";
        p=p->next;
    } while (p!=head);
    
    cout<<endl;
}


//Recursive display of circular LL
void rdisp(node *p)
{
    static node *head=p;
    static int flag=0;

    if(p!=head || flag==0)
    {
        flag=1;
        cout<<p->data<<" ";
        rdisp(p->next);
    }
    flag=0;
}

//Inserting in a circuar linked list
void insert(node *&p,int index,int key)
{
    node *first=p,*t;
    t=new node;
    t->data=key;
    t->next=0;

    if(index==0)
    {
        while(p->next!=first)
        {
            p=p->next;
        }
        p->next=t;
        t->next=first;
        p=p->next;
    }

    else
    {
        int i;
        for(i=0;i<index-1;i++)
        p=p->next;

        t->next=p->next;
        p->next=t;
        p=first;
    }
}

int main()
{
    int a[4]={1,4,7,8};
    node *p=circularnode(a,sizeof(a)/sizeof(a[0]));
    disp_circular(p);
    rdisp(p);
    (is_loop(p)==1)?cout<<"Loop there ":cout<<" No Loop ";

    insert(p,0,-1);
    disp_circular(p);
    (is_loop(p)==1)?cout<<"Loop there ":cout<<" No Loop ";

}
