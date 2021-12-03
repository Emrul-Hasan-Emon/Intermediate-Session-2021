#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a;
        cin>>a;
        for(int i=1;i<=a;i++)
        {
            if(i%2==0)
            {
                cout<<i<<" ";
            }
        }
        for(int i=a;i>=1;i--)
        {
            if(i%2!=0)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
}

