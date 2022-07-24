#include<iostream>
using namespace std;

int main()
{
    int *p;
    p=new int[5];//dynammic array created in heap memory
    
    delete []p;//deleting heap memory
}
