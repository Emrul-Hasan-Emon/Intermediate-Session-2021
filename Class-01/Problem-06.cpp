#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, f=0, p=0;
    char c1, c2;
    string s;
    cin>>s;

    i=0;
    j=s.size()-1;
    while(i<j)
    {
        if(s[i]!=s[j])
        {
            c1=s[i];
            c2=s[j];
            f++;
            break;
        }
        i++;
        j--;
    }
    if(f==0)
        cout<<"YES"<<endl; //Already the string is palindrome
    else
    {
    //    cout<<c1<<" "<<c2<<endl;
        i=0;
        j=s.size()-1;
        while(i<j)
        {
            if(s[i]==s[j])
                i++, j--;
            else if(s[i]==c1)
                i++;
            else if(s[j]==c1)
                j--;
            else
            {
                p++;
                break;
            }
        }
        i=0;
        j=s.size()-1;
        while(i<j)
        {
            if(s[i]==s[j])
                i++, j--;
            else if(s[i]==c2)
                i++;
            else if(s[j]==c2)
                j--;
            else
            {
                p++;
                break;
            }
        }
        if(p!=2)
            cout<<"YES"<<endl; //It means by deleting c1 or c2 we can make the string palindrome
        else
            cout<<"NO"<<endl; //It means by deleting c1 or c2 we can not make string palindrome
    }
}
