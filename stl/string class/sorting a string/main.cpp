#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

bool compare(string a, string b)
{
    if(a.length()==b.length())
         return a<b;

    else
         return a.length()>b.length();
}
int main()
{
    string s[3];
    s[0]="Banana juice";
    s[1]="Mango juice";
    s[2]="Apple juice";

    for(int i=0;i<3;i++)
    {
        cout<<s[i]<<endl;
    }

    sort(s,s+3);//sorts the string lexiographically

    for(int i=0;i<3;i++)
    {
        cout<<s[i]<<endl;
    }

     //if we want to sort based on say length of the string, we can define our own comparators
    string s1[3];
    s1[0]="Hi";
    s1[1]="Mango juice";
    s1[2]="Apple juice";
    
    sort(s1,s1+3,compare);
    for(int i=0;i<3;i++)
    {
        cout<<s1[i]<<endl;
    }

}