#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t>>n;
    for (int i=0;i<t;i++)
    {
        int a[n];
        cin>>a[i];

    for (int i=0;i<n;i++)
    {
        for (int i=0;i<n-1;i++)
        {
            if(a[i]!=a[i+1])
            {
                int x[n];
                x[i]=a[i];
                cout<<x[i];
            }
        }

    }}
