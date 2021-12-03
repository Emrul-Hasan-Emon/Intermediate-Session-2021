
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, f=0, p=0, dlt=0; //dlt=delete
    // dlt holds amount of bracket we have to delete for making the sequence balanced

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
                dlt++;
        }
    }
    if(f>0)
        dlt=dlt+f; //If f brackets are reamining we have to delete them also
    cout<<dlt<<endl;
}
/* Some test cases
1. (((())
2. ((()))
3. ((((((
4. ))))))
5. ()()()()
6. ())
7. (()
8. (((()))
9. (((((())))))
10.(((()))
*/
