#include<iostream>
#include<cstring>
using namespace std;

char *mystrok(char *a,char b)
{
    static char*input=NULL;
    if(a!=0)
    {
        input=a;
    }
     
    if(input==0)
    {
        return 0;
    }
    char *t;
    t=new char[strlen(a)+1];
    int i=0;
    for(;input[i]!='\0';i++)
    {
        if(input[i]!=b)
        {
            t[i]=input[i];
        }

        else
        {
            t[i]='\0';
            input=input+i+1;
            return t;
        }
    }

    t[i]='\0';
    input=NULL;
    return t;

}
int main()
{
    char s[100]="my name is prathvik";

    char *ptr=mystrok(s,' ');
    cout<<ptr<<endl;

    while(ptr!=0)
    {
        ptr=mystrok(NULL,' ');
        cout<<ptr<<endl;    
    }

}
//there is a slight mistake