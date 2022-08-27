#include<iostream>
#include<algorithm>
using namespace std;

class vectors
{
    private:
       int cs;
       int ms;
       int *ar;

    public:
       vectors(){cs=0;ms=1;ar=new int[ms];}
       void push_back(int x);
       void pop_back();
       int front();
       int back();
       bool empty();
       int operator[](const int i);
       int size();

};

void vectors::push_back(int x)
{
    if(cs==ms)
    {
        int *old=ar;
        ar=new int[2*ms];
        ms=2*ms;

        for(int i=0;i<cs;i++)
        {
            ar[i]=old[i];
        }

        delete[]old;
    }

    ar[cs]=x;
    cs++;
}

void vectors::pop_back()
{
    cs--;
}

int vectors::operator[](const int i)
{
    return ar[i];
}

int vectors::front()
{
    return ar[0];
}

int vectors::back()
{
    return ar[cs-1];
}

bool vectors::empty()
{
    return cs==0?true:false;
}

int vectors::size()
{
    return cs;
}

int main()
{
    vectors a;
    a.push_back(1);
    a.push_back(3);
    a.push_back(4);
    a.pop_back();
    a.push_back(-4);

    for(int i=0;i<3;i++)
    {
        cout<<a[i]<<",";
    }
    cout<<endl;
    cout<<"Front is "<<a.front()<<" Back is "<<a.back()<<endl;
    cout<<"size is "<<a.size()<<endl;
}