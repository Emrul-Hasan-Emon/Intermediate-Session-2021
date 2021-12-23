You are given a number consists of n digits. Find whether the number is multiple of 3 or not.
As this is a very big number this will not if into even in long long range. So, this number has to be taken also in string. And if summation of every digit in
string is divisible by 3 then whole number is divisible by 3.
  
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>s;
    n=0;

    for(int i=0; i<s.size(); i++)
    {
        n=n+(s[i]-'0');
    }
    if(n%3==0)
        cout<<"Divisible by 3"<<endl;
    else
        cout<<"Not Divisible by 3"<<endl;
}
