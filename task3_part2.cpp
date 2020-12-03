#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)                          
{ 
    if (a == b)
        return a; 
    if (a > b)
    {
        return gcd(a - b, b);
    }
    else
    {
        return gcd(a, b - a);
    }        
}

int main()
{
	int a,b;
	cin>>a>>b;
    if ((a == 0) || (b == 0))
        cout<<"0 not allowed!";
        return 1;
    while (gcd(a,b)!=1) 
    {
        int d=gcd(a,b);
        a=a/d;                          
    }                                         
    cout<<a;
    return 0;
}