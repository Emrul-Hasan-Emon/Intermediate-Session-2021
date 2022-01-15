Problem Link : https://lightoj.com/problem/how-cow

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, cs;
    cin>>t;
    for(cs=1; cs<=t; cs++)
    {
        int x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;
        int n;
        cin>>n;

        if(x1>x2)
            swap(x1, x2);
        if(y1>y2)
            swap(y1, y2);
        cout<<"Case "<<cs<<":\n";
        while(n--)
        {
            int x, y;
            cin>>x>>y;

            if((x>=x1 and x<=x2) and (y>=y1 and y<=y2))
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
    }
}
