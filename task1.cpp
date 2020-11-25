#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{                      //assumed starting point also has a gas station
    int x,y,z;
    cin>>x>>y>>z;
    if ( z>=(x-y%x))
        cout<<"YES";
    else if (y%x==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
        
}