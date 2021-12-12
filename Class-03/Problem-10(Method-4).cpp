#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, x;
    cin>>n;

    map<int, int>m;

    for(i=0; i<n; i++)
    {
        cin>>x;
        m[x]++;
    }
    map<int, int>::iterator it=m.begin(); ///You can write auto it=m.begin()
    while(it!=m.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
}

