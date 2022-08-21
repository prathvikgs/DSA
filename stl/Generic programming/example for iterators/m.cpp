#include<iostream>
#include<list>
using namespace std;

template<class ForwardIterator,class T>
ForwardIterator search(ForwardIterator start,ForwardIterator end,T key)
{
    while(start!=end)
    {
        if(*start==key)
        {
            return start;
        }
        start++;
    }

    return end;
}

int main()
{
    list<int> l;
    l.push_back(3);
    l.push_back(-4);
    l.push_back(5);
    l.push_back(9);

    auto it=search(l.begin(),l.end(),1);
    
    it==l.end()?cout<<" Not found ":cout<<*it<<endl;

}