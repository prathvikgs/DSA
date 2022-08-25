#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool compare(int a,int b)
{
    return a>b?true:false;
}

int main()
{
    int a[]={1,6,-3,7,9};
    int n=sizeof(a)/sizeof(a[0]);
    
    //searching
    int key=6;
    auto it=find(a,a+n,8);//this is a linear search algorithm which returns the adress

    int i=it-a;
    cout<<i<<endl;
    
    //binary sarch
    vector<int> b={1,4,4,5,6,7,9};
    bool present = binary_search(b.begin(),b.end(),4);
    cout<<present<<endl;
     
    auto it1=lower_bound(b.begin(),b.end(),4);//gives the adress of the first occurence
    auto it2=upper_bound(b.begin(),b.end(),4);//last occurence

    cout<<it1-b.begin()<<endl;
    cout<<it2-b.begin()<<endl;
    cout<<"Freq of 4 is "<<it2-it1<<endl;

    //Sorting in STL
    vector<int>c={2,-1,0,9,3,1,11,-4};

    for(auto it=c.begin();it!=c.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
   
    sort(c.begin(),c.end()); //sorts the container in ascending order

    for(auto it=c.begin();it!=c.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    sort(c.begin(),c.end(),compare);//sorts in the decreasing order

    for(auto it=c.begin();it!=c.end();it++)
    {
        cout<<*it<<" ";
    }
    
}