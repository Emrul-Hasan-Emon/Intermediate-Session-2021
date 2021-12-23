Find Least Common Multiple of two elements.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, ans, gcd;
    cin>>a>>b;

    gcd=__gcd(a, b);
    ans=(a/gcd)*b;

    cout<<ans<<endl;
}
