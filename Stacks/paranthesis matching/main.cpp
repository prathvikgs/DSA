#include<iostream>
#include<stack>
using namespace std;

bool is_balance(string a)
{
    int i=0;
    stack <char> st;

    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='(' || a[i]== '[' || a[i]=='{')
        {
            st.push(a[i]);
        }

        else if(a[i]==')' || a[i]==']' || a[i]=='}')
        {
            if(st.empty()==1)
            return false;

            else 
            {
                st.pop();
            }
        }
    }

    return st.empty()==1?true:false;
}

int main()
{
    string a="(a+b)*{[c/d]}";
    is_balance(a)==1?cout<<"Balanced ":cout<<"Not balanced "<<endl;
}

