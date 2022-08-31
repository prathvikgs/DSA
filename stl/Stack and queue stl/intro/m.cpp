#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main()
{
    /*STACK - Last in first out*/
    stack<int> s;
     for(int i=0;i<4;i++)
    {
        s.push(i*2+6);
    }

    while(s.empty()!=1)
    {
        cout<<s.top()<<",";
        s.pop();
    }
    cout<<endl;

    /*QUEUE - first in first out*/
    queue<int> q;
    for(int i=0;i<4;i++)
    {
        q.push(i*2+6);
    }

    while (q.empty()!=1)
    {
        cout<<q.front()<<",";
        q.pop();
    }
    cout<<endl;
    
    
}