Problem Link : https://lightoj.com/problem/ekka-dokka

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, cs;
    cin>>t;
    for(cs=1; cs<=t; cs++)
    {
        long long n, f=0, i, m;
        cin>>n;
        m=n;
        cout<<"Case "<<cs<<": ";
        if(n&1)
            cout<<"Impossible\n";
        else
        {
            for(i=2; i<=n; i*=2)
            {
                if(n%i==0 and (n/i)%2==1)
                {
                    cout<<n/i<<" "<<i<<endl;
                    f++;
                    break;
                }
            }
            if(!f)
                if(n==1)
                    cout<<1<<" "<<m<<endl;
                else
                    cout<<n<<" "<<i<<endl;
        }
    }
}
