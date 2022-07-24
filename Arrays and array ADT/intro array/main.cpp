#include<iostream>
using namespace std;
int main()
{
    //initializing;
    int a[4];//here the values are garbage values
    cout<<a[3]<<endl;
    int b[3]={1,2,3};//initialized
    cout<<b[1]<<endl;
    int c[5]={1};//remaining elements will be initialized to 0
    cout<<c[3]<<endl;
    cout<<2[b]<<endl;/*instead of writing a[i] to acces the ith element in arrray a i[a] can be used as well*/
    cout<<*(b+2)<<endl;//acessing using pointers


}

