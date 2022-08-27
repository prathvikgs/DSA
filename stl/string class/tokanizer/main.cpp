#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    char a[]="Hii this is prathvik";
    char *ptr=strtok(a," ");

    while(ptr!=0)
    {
        cout<<ptr<<endl;
        ptr=strtok(0," ");
    }
}