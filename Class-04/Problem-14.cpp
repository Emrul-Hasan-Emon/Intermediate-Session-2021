You are given a number n. You have to find number of prime numbers between range 1 to n(1≤n≤10^5). Time complexity of this solution will be O(nsqrt(n)).
In this problem for every number 1 to n(inclusive) we have to check whether that number is prime or not. You have to total number of prime.
  
  
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, f, j, total_prime=0;
    cin>>n;
    
    for(i=2; i<=n; i++)
    {
        f=0;
        for(j=2; j*j<=i; j++)
        {
            if(i%j==0)
            {
                f++;
                break;
            }
        }
        if(f==0) //It means number i is prime
            total_prime++;
    }
    cout<<total_prime<<endl;
}
