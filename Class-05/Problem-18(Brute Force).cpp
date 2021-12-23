Find Greatest Common Divisor (GCD) of two elements. This is a brute force solution of complexity O(min(n, m)).

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, i, ans=0;
    cin>>n>>m;
    int mnm=min(n, m);

    for(i=1; i<=mnm; i++)
    {
        if(n%i==0 && m%i==0)
        {
            ans=max(ans, i);
        }
    }
    cout<<ans<<endl;
}
