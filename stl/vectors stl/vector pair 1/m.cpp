#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

float dist(int x,int y)
{
    return x*x+y*y;
}
bool compare(pair<int,int> p1,pair<int,int>p2)
{
    if(dist(p1.first,p1.second)==dist(p2.first,p2.second))
         return p1.first>=p2.first;

    return dist(p1.first,p1.second)>dist(p2.first,p2.second);
}
int main()
{
    vector<pair<int,int>> cabs;
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        cabs.push_back(make_pair(x,y));
    }

    sort(cabs.begin(),cabs.end(),compare);

    for(auto c:cabs)
    {
        cout<<"cars"<<" "<<c.first<<","<<c.second<<endl;
    }
}