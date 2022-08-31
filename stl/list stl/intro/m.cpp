#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main()
{
    //cerating lists
    list<int> l1 ={1,6,-4,6,3};
    list<string> l2={"prathivk","school","iitkgp"};
    l1.push_back(5);

    //iterating over the string
    for(auto x:l2)
    {
        cout<<x<<",";
    }cout<<endl;

    for(auto x:l1)
    {
        cout<<x<<",";
    }cout<<endl;

    l1.push_back(-4);
    l1.push_front(-1);
    for(auto it=l1.begin();it!=l1.end();it++)
    {
        cout<<*it<<",";
    }cout<<endl;

    l1.sort();
    for(auto it=l1.begin();it!=l1.end();it++)
    {
        cout<<*it<<",";
    }cout<<endl;

}