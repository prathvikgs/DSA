#include<iostream>
using namespace std;

int fun(int n)
{
    static int x=0;
    if(n>0)
    {
        x++;
        
        return fun(n-1)+x;
    }
    return 0;
}
int fun1(int n)
{
    int y=0;
    if(n>0)
    {
        y++;
        
        return fun1(n-1)+y;
    }
    return 0;
}

int main()
{
    
    cout<<fun(3)<<endl;
    cout<<fun1(4)<<endl;
    cout<<fun(3)<<endl;
    cout<<fun(3)<<endl;
    cout<<fun1(4)<<endl;
}
//static variables are created in the code section and they should be maintained seperately
