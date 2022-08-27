#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class car
{
   public:

   string name;
   int x;
   int y;
   car(){}
   car(string name,int x,int y)
   {
    this->name=name;
    this->x=x;
    this->y=y;
   }
   float dist()
   {
        return (x*x + y*y);
   }

};

bool compare(car c1,car c2)
{
    if(c1.dist()==c2.dist())
        return c1.name<c2.name;

    return c1.dist()<c2.dist();
}

int main()
{
    int n,i;//n cabs available with x,y coordinate
    cin>>n;
    
    vector<car> cab;
    for(i=0;i<n;i++)
    {
        string a;
        cin>>a;
        int x,y;
        cin>>x>>y;
        car temp(a,x,y);
        cab.push_back(temp);
    }
    
    sort(cab.begin(),cab.end(),compare);

    for(auto x:cab)
    {
        cout<<x.name<<"->"<<x.x<<","<<x.y<<endl;
    }

}