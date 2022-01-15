Problem Link : https://codeforces.com/problemset/problem/1324/B

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, i, j, k, l, f=0;
        cin>>n;
        int a[n];

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(i=0; i<n; i++)
        {
            int x=a[i];
            int pos=-1;

            for(j=n-1; j>=i; j--)
            {
                if(a[j]==a[i])
                {
                    pos=j;
                    break;
                }
            }

            if(pos!=-1)
            {
                int y=pos-i-1;
                if(y>0)
                {
                    cout<<"YES\n";
                    f++;
                    break;
                }
            }
        }
        if(!f)
            cout<<"NO"<<endl;
    }
}
