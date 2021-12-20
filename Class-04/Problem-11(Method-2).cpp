Find a number is prime or not. Time complexity of this problem is O(sqrt(n))
  
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, f=0;
    cin>>n;
    for(i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            f++;
            break;
        }
    }
    if(f>0)
        cout<<"Not Prime"<<endl;
    else
        cout<<"Prime"<<endl;
}
