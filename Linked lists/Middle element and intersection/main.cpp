#include<iostream>
#include<stack>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *create(int a[],int n)
{
    node *f,*l,*t;
    f=new node;
    f->data=a[0];
    f->next=0;
    l=f;

    int i;
    for(i=0;i<n;i++)
    {
        t=new node;
        t->data=a[i];
        t->next=0;
        l->next=t;
        l=t;
    }

    return f;
}

void disp(node *p)
{
    while(p)
    {
        cout<<p->data<<" ";
    }
    cout<<endl;
}


//Finding the middle element of a linked list
int middle(node *p)
{
    node *fast=p,*slow=p;
    
    while(fast!=NULL)
    {
        
        fast=fast->next;
        fast!=0?slow=slow->next:0;
        fast!=0?fast=fast->next:0;
    }

    return slow->data;

}

//Finding the Intersecting point of 2 LL
node *intersecting(node *p,node *q)
{
    stack <node> st1,st2;
    node *t;
    while(p)
    {
        st1.push(*p);
        p=p->next;
    }

    while(q)
    {
        st2.push(*q);
        p=p->next;
    }

    while(&st1.top()==&st2.top())
    {
          t=&st1.top();
          st1.pop();
          st2.pop();
    }

    return t;
}

int main()
{
    int a[5]={1,2,3,4,5};
    node *p=create(a,5);
    cout<<middle(p)<<endl;
}
