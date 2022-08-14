#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

//creating a linked list
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
//displaying a LL
void disp(node *p)
{
    while(p!=0)
    {
        cout<<p->data<<" ";
        p=p->next;
    }

    cout<<endl;
}

// 1). Inserts the element at a given idex,
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
// 2).Deleting a node
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


//3). Checking if the LL is sorted 
bool issorted(node *p)
{
    int x=p->data;
    p=p->next;
    while(p!=NULL)
    {
        if(x>p->data)
        return false;
        
        x=p->data;
        p=p->next;
    }

    return true;
}
//4). Inserting an element in a sorted LL
void sort_insert(node *&p,int k)
{
    node *first=p,*t,*q=0;
    t=new node;
    t->data=k;
    t->next=0;

    while(p!=0 && p->data<k)
    {
        q=p;
        p=p->next;
    }
    
    t->next=p;
    q!=NULL?q->next=t:first=t;

    p=first;

}
//5). deleting duplicates in a sorted LL
void delete_duplicates(node *&p)
{
    node *first=p,*last=0,*q=p;
    p=p->next;

    while(p!=0)
    {
        if(p->data==q->data)
        {
            q->next=p->next;
            delete p;
            p=q->next;
        }
        
        else
        {
            q=p;
            p=p->next;
        }
    }

    p=first;
}

//6). Reversing a linked list (loop)(also we can use an array to copy and copy back)
void reverse(node *&p)
{
    node *first=0,*q=p,*r=p;
    while(q!=0)
    {
       q=q->next;
       r->next=first;
       first=r;
       r=q;
    }

p=first;
}

//7). Concatenating 2 LL
node *concatenate(node *p,node *q)
{
    node *first=p;
    while(p->next!=0)
    {
        p=p->next;
    }
    p->next=q;
    return first;
}

//8). Merging 2 sorted linked lists
node *sorted_merge(node *p,node *q)
{
    node *f1=p,*f2=q,*l1=p,*l2=q,*k,*first;
    k=new node;

    if(f1->data < f2->data)
    {
        k=f1;
        f1=f1->next;
    }

    else
    {
        k=f2;
        f2=f2->next;
    }
    first=k;

    while(f1!=0 && f2!=0)
    {
        if(f1->data < f2->data)
        {
            k->next=f1;
            k=k->next;
            f1=f1->next;
            k->next=0;
        }

        else
        {
            k->next=f2;
            k=k->next;
            f2=f2->next;
            k->next=0;
        }

    }

    f1!=NULL?k->next=f1:k->next=f2;

    p=l1;q=l2;

    return first;
}


int main()
{
    cout<<"1) & 2). Insertion and deletion"<<endl;
    int a[5]={1,6,2,4,0};
    node *p=create(a,5);
    disp(p);
    insert(p,10,3);
    disp(p);
    insert(p,1,6);
    disp(p);
    delete_node(p,6);
    disp(p);


    cout<<"3). Is sorted"<<endl;
    int b[4]={1,-4,7,8};
    node *q=create(b,4);
    issorted(q)==1?cout<<"sorted"<<endl:cout<<"not sorted"<<endl;
    
    cout<<"4). deleting duplicates"<<endl;
    int c[9]={1,1,2,4,4,6,6,6,6};
    node *r=create(c,9);
    disp(r);
    delete_duplicates(r);
    disp(r);

    cout<<"5). reversing a LL"<<endl;
    int d[4]={1,0,-9,4};
    node *s=create(d,sizeof(d)/sizeof(d[0]));
    disp(s);
    reverse(s);
    disp(s);

    cout<<"6). inseting in a sorted LL"<<endl;
    int e[5]={1,3,5,6,9};
    node *f=create(e,sizeof(e)/sizeof(e[0]));
    disp(f);
    sort_insert(f,-1);
    sort_insert(f,4);
    sort_insert(f,11);
    sort_insert(f,15);
    disp(f);

    cout<<"7). concatenating 2 LL"<<endl;
    int m[3]={1,5,7},n[4]={4,6,9,-1};
    node *y=create(m,sizeof(m)/sizeof(m[0])),*z=create(n,sizeof(n)/sizeof(n[0]));
    disp(y);disp(z);
    node *x=concatenate(y,z);
    disp(x);

    cout<<"8). merging 2 sorted LL"<<endl;
    int h[3]={1,5,7},i[5]={-5,3,6,9,13};
    node *j=create(h,sizeof(h)/sizeof(h[0])),*k=create(i,sizeof(i)/sizeof(i[0]));
    disp(j);disp(k);
    node *l=sorted_merge(j,k);
    disp(l);
}
