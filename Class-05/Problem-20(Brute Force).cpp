Find Least Common Multiple of two elements. This is a brute solution its complexity can be determined according to input set.
  
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, ans;
    cin>>a>>b;
    c=max(a, b);

    for(int i=c; ; i+=c)
    {
        if(i%a==0 && i%b==0)
        {
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
}
