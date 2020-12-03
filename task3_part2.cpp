#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
    if ((a == 0) || (b == 0))
    {
        cout<<"0 not allowed!";
        return 1;
    }
    while (__gcd(a,b)!=1) 
    {
        int d=__gcd(a,b);
        a=a/d;                          
    }                                         
    cout<<a;
    return 0;
}
