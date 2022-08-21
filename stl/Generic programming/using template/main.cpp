#include<iostream>
using namespace std;

//generic search function
template<typename T>
int Search(T a[],int n,T k)
{
    int i;

    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        return i;
    }

    return n;
}

//Generic function for max of 2 things
template <typename T>
T Max(T x,T y)
{
    return (x>y)?x:y;
}

//Generic class

int main()
{
    double a[4]={1.1,5.7,3.14,4.9},k=5.7;
    int b[4]={1,0,5,3};
    cout<<Search(b,4,5)<<endl;
    cout<<Search(a,4,k)<<endl;
    
    //Call int
    cout<< Max<int>(3,7) <<endl;

    //call float
    cout<<Max<float>(3.14,2.73)<<endl;

    //call for char
    cout<<Max<char>('a','n')<<endl;
}