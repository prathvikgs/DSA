#include<iostream>
using namespace std;

class stack
{
    public:
/*Data structure of a stack with size of the stack,top pointer and an array*/
    int size;
    int top;
    int *s;

/*Operation functio on stack*/
    void creator()
    {
        size=0;
        top=-1;
        s=new int[0];
    }
    void create(int x);
    void push(int x);
    void pop();
    int Top();
    bool empty();
    bool full();
};

void stack::create(int x)
{
    size=x;
    top=-1;
    s=new int[size];

}

void stack::push(int x)
{
    if(top==size-1)
    cout<<"stackoverflow"<<endl;

    else
    {
        top++;
        s[top]=x;
    }
}

void stack::pop()
{
    if(top==-1)
    cout<<"stackunderflow"<<endl;

    else
    {
        top--;
    }
}

int stack::Top()
{

    if(top==-1)
    return -1;

    else
    return s[top];
}

bool stack::empty()
{
    return top==-1?true:false;
}

bool stack::full()
{
    return top==size-1?true:false;
}

int main()
{
    stack st;
    st.create(3);
    int i;
    cout<<"enter 3 elements "<<endl;
    for(i=0;i<3;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }

    while(st.empty()==0)
    {
        cout<<st.Top()<<" ";
        st.pop();
    }

}
