#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a;
    vector<int> b(4,10);//vector of integers of size 4 with values 10
    vector<int> c(b.begin(),b.end()); //copying from b to c
    
    //iterating over the vector
    
    //using index
    for(int i=0;i<c.size();i++)
    {
        cout<<c[i]<<",";
    }
    cout<<endl;
    
    //using iterators
    for(auto it=c.begin();it<c.end();it++)
    {
        cout<<*it<<",";
    }
    cout<<endl;
    
    //for each loop
    for(auto x:c)
    {
        cout<<x<<",";
    }
    cout<<endl;
    //

    vector<int> d;
    //cout<<"enter 3 numbers\n";
    for(int i=0;i<5;i++)
    {
        //int x;
        //cin>>x;
        d.push_back(2+6*i*i);
        cout<<d.capacity()<<" capacity"<<endl;
    }
    
    d.pop_back();
    for(auto e:d)
    {
        cout<<e<<",";
    }
    cout<<endl;

    /*modifiers*/

    //Insert
    cout<<"Inserting -4 from a given position (index 1) 2 times"<<endl;
    d.insert(d.begin()+1,2,-4);
    for(auto e:d)
    {
        cout<<e<<",";
    }
    cout<<endl;
    
    //Erase
    cout<<"Erasing the given element (4rd)"<<endl;
    d.erase(d.begin()+3);
    for(auto e:d)
    {
        cout<<e<<",";
    }
    cout<<endl;

    //front and back
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    //Reserve
    vector<int> t;
    t.reserve(10);
    cout<<t.capacity()<<" capacity after reserving"<<endl;

}