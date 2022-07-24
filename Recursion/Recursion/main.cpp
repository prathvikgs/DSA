//examples
#include<iostream>
using namespace std;

void fun1(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        fun1(n-1);
    }
}

void fun2(int n)
{
    if(n>0)
    {
        fun2(n-1);
        cout<<n<<endl;
    }
}

int main()
{
    int x=4,y=5;
    fun1(x);
    cout<<endl;
    fun2(y);
}

/*
 
     fun1(4)
      /\
     4  fun1(3)
         /\
        3  fun1(2)
             /\
            2  fun1(1)
                /\
               1 fun1(0)
                   |
                nothing
 
 this is called as the tracing tree of recursive function
 */
//we can see that they give comletely different results

