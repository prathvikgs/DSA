#include<iostream>
using namespace std;

class deque
{
    int f,r,len,*s;

public:
    
    deque();
    void push_back(int x);
    void push_front(int x);
    int back();
    int front();
    int size();
    void pop_front();
    void pop_back();
    bool empty();
};

bool deque::empty()
{
    if(r==-1)
    return true;

    return false;
}
deque::deque()
{
    f=-1;
    r=-1;
    len=0;
    s=new int[len];
}

void deque::push_back(int x)
{
    r++;
    len++;
    s[r]=x;
}

void deque::pop_back()
{
    if(r!=-1)
    {r--;len--;}
}

void deque::push_front(int x)
{
    int i;
    for(i=r;i>=0;i--)
    {
        s[i+1]=s[i];
    }
    s[f+1]=x;
    r++;
    len++;
}

void deque::pop_front()
{
    if(r!=-1)
    {
        for(int i=0;i<r;i++)
        {
          s[i]=s[i+1];
        }
       r--;
       len--;
    }
    
}

int deque::front()
{
    if(f+1!=-1)
    return s[f+1];

    else return -1;
}

int deque::back()
{
    if(r!=-1)
    return s[r];

    else return -1;
}
int deque::size()
{
    return len;
}
int main()
{
    deque d;
    d.push_back(4);
    d.push_back(6);
    d.push_back(-5);
    d.push_back(10);
    d.push_front(-1);
    d.push_front(2);
    d.pop_back();
    /*2,-1,4,6,-5*/
    cout<<d.front()<<","<<d.back()<<endl;
    cout<<"Length is "<<d.size()<<endl;
    while(!d.empty())
    {
        cout<<d.back()<<",";
        d.pop_back();
    }
}