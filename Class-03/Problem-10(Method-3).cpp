
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

    for(i=0; i<n; )
    {
        int number=a[i];
        int count_no=0;

        while(i<n && a[i]==number)
        {
            count_no++;
            i++;
        }
        cout<<number<<" "<<count_no<<endl;
    }
}

