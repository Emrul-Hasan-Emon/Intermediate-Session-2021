#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, f=0, p=0;
    string s;
    cin>>s;

    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='(')
            f++;
        else
        {
            if(f>0)
                f--;
            else
            {
                p++; break;
            }
        }
    }
    if(p>0 || f>0)
        cout<<"Not Balanced"<<endl;
    else
        cout<<"Balanced"<<endl;
}
