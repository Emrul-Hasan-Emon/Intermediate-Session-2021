
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, f=0;
    string s;
    cin>>s;

    i=0; j=s.size()-1;
    while(i<j)
    {
        if(s[i]!=s[j])
        {
            f++; break;
        }
        i++; j--;
    }
    if(f==0)
        cout<<"Palindrome"<<endl; //It means the condition inside loop never became true
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
