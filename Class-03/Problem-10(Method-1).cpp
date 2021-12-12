#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j;
    cin>>n;
    int a[n];

    for(i=0; i<n; i++)
        cin>>a[i];
    sort(a, a+n);

    for(i=0; i<n; i++)
    {
        if(a[i]==-1)
            continue;

        int count_no=0;
        for(j=i+1; j<n; j++)
        {
            if(a[j]==a[i])
            {
                a[j]=-1;
                count_no++;
            }
        }
        cout<<a[i]<<" "<<count_no+1<<endl;
    }
}
