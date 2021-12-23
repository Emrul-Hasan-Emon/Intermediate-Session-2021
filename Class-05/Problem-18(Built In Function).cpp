Find Greatest Common Divisor (GCD) of two elements. This is a built in function which works in logN time complexity. It works based on Eucledian Algorithm.
  
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, ans;
    cin>>n>>m;
    ans=__gcd(n, m);
    cout<<ans<<endl;
}
