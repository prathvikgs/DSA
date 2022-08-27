#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    s="hello hii there how are u";
    cout<<s<<endl;
    string s1(s);
    cout<<s1<<endl;

    char a[]={'4','e','y','k','\0'};
    string s2(a);
    cout<<s2<<endl;

    s2.pop_back();
    s2.push_back('t');
    cout<<s2<<endl;

    //functions
    
    cout<<s.capacity()<<" "<<s.length()<<endl;
    s.shrink_to_fit();
    cout<<s.capacity()<<endl;
    s.append(", I am fine");//appending some string (can also erite s+="")
    s.append(s2);
    cout<<s<<endl;
    cout<<"comparing-> "<<s1.compare(s)<<endl;
    
    
    //iterators

    auto it=s.begin();//forward iterators
    while(it!=s.end())
    {
        cout<<*it;
        it++;
    }

    cout<<endl;

    auto it1=s.rbegin();//backward iterators
    while(it1!=s.rend())
    {
        cout<<*it1;
        it1++;
    }
    cout<<endl;
    s1.clear();
    cout<<s1.length()<<endl;

    //Finding substrings

    string f="fine";
    int index=s.find(f);
    cout<<index<<endl;
    cout<<s.substr(index,4)<<endl;

    //for each loop
    for(auto c:s)
    {
        cout<<c;
    }

}