Problem Link : https://lightoj.com/problem/knights-in-chessboard

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, i;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        int m, n;
        cin >> m >> n;
        if (n == 1 or m == 1)
            cout << "Case " << i << ": " << max(n, m) <<endl;
        else if (n == 2 or m == 2)
        {
            int cell = n * m;
            int ans = (cell / 8);
            ans *= 4;
            if (cell % 8 >= 4)
                ans += 4;
            else
                ans += cell % 8;
            cout << "Case " << i << ": " << ans <<endl;
        }
        else
        {
            int ans = ((n * m) + 1) / 2;
            cout << "Case " << i << ": " << ans <<endl;
        }
    }
}
