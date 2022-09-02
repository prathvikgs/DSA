#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> dq;
    for(int i=0;i<10;i++)
    {
        dq.push_back(i*i*i);
    }
    
    while(dq.empty()!=1)
    {
        cout<<dq.back()<<",";
        dq.pop_back();
    }
    for(int i=0;i<10;i++)
    {
        dq.push_back(i*i*i);
    }
    
    while(dq.empty()!=1)
    {
        cout<<dq.front()<<",";
        dq.pop_front();
    }

}