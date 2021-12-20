Find number of divisors of a number. Time complexity of this solution will be O(sqrt(n))
  
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, f=0, divisor=0;
    cin>>n;

    for(i=1; i*i<=n; i++)
    {
        if(i*i==n)
            divisor++;
        else if(n%i==0)
            divisor+=2;
    }
    cout<<divisor<<endl;
}
