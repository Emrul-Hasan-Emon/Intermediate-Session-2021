#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        (i%5==0&&i%2!=0)?(sum=sum+i):(sum=sum+0);
    }
    printf("%d",sum);
}
