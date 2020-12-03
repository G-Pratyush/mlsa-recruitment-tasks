#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    char t[m][n];
    char a;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a;
            t[i][j]=a;
        }
    }
    int counter=0;
    for(int i=0;i<m-1;i++)
    {
        if(t[i][n-1]!='D')
        {
            counter++;
        }
    }
    for(int i=0;i<n-1;i++)
    {
        if((t[m-1][i])!='R')
        {
            counter++;
        }
    }
cout<<counter;
return 0; 

}