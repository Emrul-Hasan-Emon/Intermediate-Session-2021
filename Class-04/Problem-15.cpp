https://codeforces.com/contest/1589/problem/A.

After Solving the equation you will get,
  xv^2+yu^2=0
  yu^2=-xv^2
  y=-(xv^2)/u^2 

For here you can see if we take x=u^2
  y=-u^2*v^2/u^2 
  y=-v^2
As in this problem multiple answer can be, so this is valid answer.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long u, v, x, y;
        cin>>u>>v;
        x=u*u;
        y=-(v*v);

        cout<<x<<" "<<y<<endl;
    }
}
