You are given a number consists of n digits. Find whether this is a multiple of m or not. This question can be in another form.
This problem can be in another format.
 •	You are given a number consists of n digits. Find whether this number is divisible by m or not.
•	You are given a number consists of n digits. Find whether GCD(that number, m)=m or not. Where GCD stands for Greatest Common Divisor.
•	You are given a number consists of n digits. Find whether m is divisor of that number or not.
•	You are given a number consists of n digits. Find whether LCM(that number, m)=that number or not. Where LCM stands for least Common Multiple.
•	You are given a number consists of n digits. Find whether some integer*m is equal to that number or not.
•	You are given a bread of length n. Find whether this bread can stripped into several parts of equal size m or not.
  
	This problem cannot be solved by variable because it can contains more than 1000 digits. So, this problem has to be solved using string.
  
 #include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    string s;
    cin>>s>>m;
    n=0;

    for(int i=0; i<s.size(); i++)
    {
        n=n*10+(s[i]-'0'); //Our childhood division process
        n=n%m;
    }

    if(n==0)  //This means the number is divisible by m
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

