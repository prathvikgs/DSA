//Building an stl container

#include<iostream>
#include<algorithm>
using namespace std;

template<typename T>
class vectors
{
    private:
       int cs;
       int ms;
       T *ar;

    public:
       vectors(){cs=0;ms=1;ar=new T[ms];}
       void push_back(T x);
       void pop_back();
       T front();
       T back();
       bool empty();
       T operator[](const int i);
       int size();

};

template<typename T> void vectors<T>::push_back(T x)
{
    if(cs==ms)
    {
        T *old=ar;
        ar=new T[2*ms];
        ms=2*ms;

        for(int i=0;i<cs;i++)
        {
            ar[i]=old[i];
        }

        delete[]old;
    }

    ar[cs]=x;
    cs++;
}

template<typename T> void vectors<T>::pop_back()
{
    cs--;
}


template<typename T>T vectors<T>::operator[](const int i) 
{
    return ar[i];
}


template<typename T> T vectors<T>::front()
{
    return ar[0];
}


template<typename T> T vectors<T>::back()
{
    return ar[cs-1];
}


template<typename T>bool vectors<T>::empty()
{
    return cs==0?true:false;
}


template<typename T>int vectors<T>::size()
{
    return cs;
}

int main()
{
    vectors<int> a;
    a.push_back(1);
    a.push_back(3);
    a.push_back(4);
    a.pop_back();
    a.push_back(-4);

    for(int i=0;i<3;i++)
    {
        cout<<a[i]<<",";
    }
    cout<<endl;
    cout<<"Front is "<<a.front()<<" Back is "<<a.back()<<endl;
    cout<<"size is "<<a.size()<<endl;
}