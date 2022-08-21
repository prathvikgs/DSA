#include<iostream>
#include<iterator>
#include<vector>
using namespace std;

int main()
{
    vector<int> a={1,5,2,4,5};

    //Declaring an iterator to a vector
    vector<int>::iterator it;

    //using iterator to display
    for(it=a.begin();it<a.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    it=a.begin();
    advance(it,4);//advances the iterator by 1 position
    cout<<*it<<endl;

    it=a.begin();
    auto it1=next(it,3);
    cout<<*it1<<endl;
    
    it=a.end();
    auto it2=prev(it,3);
    cout<<*it2<<endl;

    cout<<" .insertor() "<<endl;

    vector<int> ar={1,2,4,5},ar1={-1,4,3,9};
    vector<int>::iterator ptr=ar.begin();

    advance(ptr,2);
    copy(ar1.begin(),ar1.end(),inserter(ar,ptr));
    it=ar.begin();

    for(;it<ar.end();it++)
    {
        cout<<*it<< " ";
    }


}
/*
Iterators are used to point at memory adresses of STL containers
.begin() is used to return the beginning posotion of the container
.end() to return the after end position of the container
.advance() iterator position to specified number in the argument
.next() returns new iterator that the iterator would point after advancing the positions
.prev() returns new iterator after decrementing the positions 

.insertor() insert elements in the container at any position
*/