#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin>>s1;
    s2=s1; //if s1="Emon", s2 will b2 "Emon"
    reverse(s2.begin(), s2.end()); // s2="nmoE" s2 will  be reversed

    if(s1==s2)
        cout<<"Palindrome"<<endl;
    else
        cout<<"Not Palindrome"<<endl;
}
/*Some test cases
tenet
emon
madam
akash
abacaba
abcba
*/
