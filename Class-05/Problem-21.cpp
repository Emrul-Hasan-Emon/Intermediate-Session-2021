Find Least Common Multiple of an array.
  
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, gcd, lcm;
    cin>>n;
    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    gcd=a[0]; lcm=a[0];
    for(i=1; i<n; i++)
    {
        gcd=__gcd(lcm, a[i]);
        lcm=(a[i]/gcd)*lcm;
    }
    cout<<lcm<<endl;
}
