#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

class queue
{
    node *start,*back;

public:
    
    queue();//constructer
    void push(int x);
    void pop();
    int size();
    int front();
    bool empty();
};

queue::queue()
{
    start=0;
    back=0;
}

void queue::push(int x)
{
      node *t;
      t=new node;
      t->data=x;
      t->next=0;

    if(start==0)
    {
       start=back=t;
    }

   else
   {
      
      back->next=t;
      back=t;
   }

}

void queue::pop()
{
    if(start!=0)
    {
        start=start->next;
    }

    else
    {
        cout<<"Queue empty"<<endl;
    }
}

int queue::front()
{
    if(start!=0)
         return start->data;

    else 
    {
        cout<<"Queue empty"<<endl;return -1;
    }
}

bool queue::empty()
{
    if(start==0)
    return true;

    return false;
}

int main()
{
    queue q;
    cout<< q.front()<<endl;
    cout<<q.empty()<<endl;
    q.push(3);
    cout<<q.empty()<<endl;
    
    q.push(-1);
    q.push(5);
    q.push(7);
    q.push(-4);

    while(!q.empty())
    {
        cout<<q.front()<<",";
        q.pop();
    }cout<<endl;

    cout<<q.empty()<<endl;
    q.push(4);
    cout<<q.empty()<<","<<q.front()<<endl;
}