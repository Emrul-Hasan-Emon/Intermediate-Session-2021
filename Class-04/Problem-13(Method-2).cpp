Find sum of divisors of a number. Time complexity of this solution will be O(sqrt(n)).
  
 #include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, f=0, sum_divisor=0;
    cin>>n;

    for(i=1; i*i<=n; i++)
    {
        if(i*i==n)
            sum_divisor+=i;
        else if(n%i==0)
        {
            sum_divisor+=i;
            sum_divisor+=(n/i);
        }
    }
    cout<<sum_divisor<<endl;
}
