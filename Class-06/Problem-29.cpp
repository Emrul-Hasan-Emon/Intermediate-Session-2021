Problem Link : https://codeforces.com/problemset/problem/474/B

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, k, l;
    cin>>n;
    k=0;

    vector<pair<int, int> >v;

    for(i=0; i<n; i++)
    {
        cin>>l;
        v.push_back(make_pair(k+1, k+l));
        k+=l;
    }

    int q;
    cin>>q;

    while(q--)
    {
        cin>>l;
        int lo, hg, md;
        lo=0;
        hg=v.size()-1;

        while(lo<=hg)
        {
            md=(lo+hg)/2;

            int x=v[md].first, y=v[md].second;

            if(l>=x and l<=y)
                break;

            if(l>=x and l>=y)
                lo=md+1;
            else
                hg=md-1;
        }
        cout<<md+1<<endl;
    }
}
