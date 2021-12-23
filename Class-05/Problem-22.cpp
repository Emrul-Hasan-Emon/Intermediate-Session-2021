You are given a number consists of n digits. Find whether the number is Odd or Even (1≤n≤10^3).
As this number cannot be taken into number. So, this number has to be taken as string. And if last digit of string is even then whole number is even otherwise off.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>s;
    n=s[s.size()-1];

    if(n%2==0)
        cout<<"Even"<<endl;
    else
        cout<<"Odd"<<endl;
}
