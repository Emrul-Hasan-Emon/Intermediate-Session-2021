Problem Link : https://open.kattis.com/problems/pyramids

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 1, sum = 1, i = 3;
	cin >> n;
	while (sum <= n)
	{
		sum += i * i;
		i += 2;
		count++;
	}
	cout << count - 1 <<endl;
}
