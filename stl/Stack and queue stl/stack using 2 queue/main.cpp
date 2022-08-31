//Implementing stack usign 2 queues
#include<iostream>
#include<queue>
using namespace std;

template<typename T>
class stack
{
    queue<T> q1,q2;
    public:
    void push(T x);
    void pop();
    int top();
    bool empty();
};

template<typename T> void stack<T>::push(T x)
{
    q2.push(x);

    while(q1.empty()!=1)
    {
        q2.push(q1.front());
        q1.pop();
    }

    swap(q1,q2);
}

template<typename T> void stack<T>::pop()
{
    q1.pop();
}

template<typename T> int stack<T>::top()
{
   return q1.front();
}

template<typename T> bool stack<T>::empty()
{
   return q1.empty();
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(4);
    s.push(-4);
    s.push(10);
    s.push(8);

    cout<<s.empty()<<endl;

    while (s.empty()==0)
    {
        cout<<s.top()<<",";
        s.pop();
    }
    cout<<endl;
    cout<<s.empty()<<endl;
    
}