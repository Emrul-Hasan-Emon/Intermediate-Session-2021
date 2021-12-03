

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
        {
            f++;
            break;
        }
    }
    for(i=i; i<s.size(); i++)
    {
        if(s[i]==')')
        {
            f++;
            break;
        }
    }
    if(f==2)
        cout<<s.size()-2<<endl;
    else
        cout<<-1<<endl;

    /*As I have to delete sequence such a way so that the sequence doesn't become empty.
    So, I will keep one '(' and one ')'. And rest of them I will delete.
    So, firsty I am searching for '(' and after that I am searching for ')'.
    If f==2 it means I found one '(' and one ')'. If f!=2 I did not found '(' and ')'. So, the answer is -1.
    For example, ")(". If I want to make balanced, I have to delete every brackets. But the condition was the sequence
    cannot become empty. If f==2 I found, and keeping 2 rest of them I will delete.
    */
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
11.)(
12.)))((
13. )()
*/
