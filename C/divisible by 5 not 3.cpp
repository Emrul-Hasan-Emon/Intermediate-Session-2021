#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,s=0;
    cin>>n;
    for(int i=5;i<=n;i=i+5)
    {
        sum=sum+i;
    }
    for(int i=15;i<=n;i=i+15)
    {
        s=s+i;
    }
    cout<<sum-s;
}
