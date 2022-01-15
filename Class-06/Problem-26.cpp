Problem Link : https://codeforces.com/problemset/problem/652/B

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j;
    cin>>n;
    int a[n];

    for(i=0; i<n; i++)
        cin>>a[i];
    sort(a, a+n);

    i=0; j=n-1;
    while(i<=j)
    {
        if(i==j)
        {
            cout<<a[i]<<endl;
            break;
        }
        cout<<a[i]<<" "<<a[j]<<" ";
        i++; j--;
    }
}
