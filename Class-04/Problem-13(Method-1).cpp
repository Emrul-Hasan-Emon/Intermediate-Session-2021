Find sum of divisors of a number. Time complexity of this solution will be O(n).
  
 #include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, f=0, sum_divisor=0;
    cin>>n;

    for(i=1; i<=n; i++)
    {
        if(n%i==0)
            sum_divisor+=i;
    }
    cout<<sum_divisor<<endl;
}
