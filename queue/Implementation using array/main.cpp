#include<iostream>
using namespace std;

class queue
{
private:
    int fronts,back,len,*q;

public:
    queue();
    void push(int x);
    void pop();
    int front();
    bool empty();
    int size();

};

queue::queue()
{
    len=0;
    fronts=-1;
    back=-1;
    q=new int[len];
}

void queue::push(int x)
{
    back++;
    len++;
    q[back]=x;
}

void queue::pop()
{
    if(fronts!=back)
    {
        fronts++;
        len--;
    }
}

int queue::front()
{
    return q[1+fronts];
}

bool queue::empty()
{
    if(fronts==back)
    return true;

    else 
    return false;
}

int queue::size()
{
    return len;
}

int main()
{
    queue q;
    q.push(1);
    q.push(-3);
    q.push(4);
    q.push(-5);
    cout<<"Length is "<<q.size()<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<",";
        q.pop();
    }
    cout<<endl;
    cout<<"Length is "<<q.size()<<endl;
}