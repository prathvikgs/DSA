//Implementing queue using stacks

#include<iostream>
#include<stack>
using namespace std;

class queue
{
    public:
    stack<int> s1,s2;

    void push(int x);
    void pop();
    int front();
    int back();
    bool empty();
} ;

void queue::push(int x)
{
    while(s1.empty()==0)
    {
        s2.push(s1.top());
        s1.pop();
    }

    s1.push(x);

    while(s2.empty()==0)
    {
        s1.push(s2.top());
        s2.pop();
    }
}

void queue::pop()
{
    s1.pop();
}

int queue::front()
{
    return s1.top();
}

int queue::back()
{
    while(s1.empty()==0)
    {
        s2.push(s1.top());
        s1.pop();
    }

    int x=-1;
    x=s2.top();

    while(s2.empty()==0)
    {
        s1.push(s2.top());
        s2.pop();
    }

    return x;
}

bool queue::empty()
{
    return s1.empty();
}

int main()
{
    queue q;
    q.push(1);
    q.push(3);
    q.push(-2);
    q.push(0);

    while(q.empty()==0)
    {
        cout<<q.front()<<",";
        q.pop();
    }cout<<endl;
}