#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, total=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];

   for(i=n-1; i>=0; i--)
   {
       if(a[i]==-1)
        continue;
        total++;
       for(j=i-1; j>=0; j--)
       {
           if(a[j]==a[i])
           {
               a[j]=-1;
           }
       }
   }
   cout<<total<<endl;
   for(i=0; i<n; i++)
   {
       if(a[i]!=-1)
       {
           cout<<a[i]<<" ";
       }
   }
   cout<<endl;
}

