Problem Link : https://lightoj.com/problem/parity

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int cs=1; cs<=t; cs++)
    {
        int n;
        cin >> n;
        int count = 0;
        while (n != 0)
        {
            if (n % 2 != 0)
                count++;
            n /= 2;
        }
        if (count % 2 == 0)
            cout << "Case " << cs << ": even\n";
        else
            cout << "Case " << cs << ": odd\n";
    }
}
