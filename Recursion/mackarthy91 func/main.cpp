//
//  main.cpp
//  mackarthy91 func
//
//  Created by prathvik gs on 29/05/22.
//

#include<iostream>
using namespace std;

int mac(int n)
{
    if(n>100)
        return n-10;
    else return mac(mac(n+11));
}
int main()
{
    int x=11;
    cout<<mac(x)<<endl;
}
