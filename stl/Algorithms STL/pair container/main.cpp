#include<iostream>
#include<vector>
using namespace std;

int main()
{
    pair<int,char>p;
    p.first=4;
    p.second='p';

    cout<<p.first<<" "<<p.second<<endl;

    vector< pair <int,int> > a;//pair of vectors
   
    int i=0;

    for(i=0;i<4;i++)
    {
        a.push_back(make_pair(i,i*i));
    }

    for(i=0;i<4;i++)
    {
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }

    pair<pair<int,int>,string> car;

    car.second="audi";
    car.first.first=1;
    car.first.second=4;

    cout<<car.first.first<<" "<<car.first.second<<" "<<car.second<<endl;
}