Find Greatest Common Divisor of an array.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, gcd=0;
    cin>>n;
    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        gcd=__gcd(gcd, a[i]);
    }
    cout<<gcd<<endl;
}
