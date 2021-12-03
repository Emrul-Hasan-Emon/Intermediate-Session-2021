#include<stdio.h>
int main()
{
    int a,n,s1=0,s2=0;
    scanf("%d %d",&a,&n);
    int i=a-n;
    do
    {
        s1+=i;
    }
    while(i--);
    do
    {
        s2+=a;
    }
    while(a--);
    printf("%d",s1+s2);

}
