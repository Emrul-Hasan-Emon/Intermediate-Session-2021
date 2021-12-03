#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    for(int i=5;i<=n;i+=10)
    {
      sum=sum+i;
    }
    cout<<sum;
}
