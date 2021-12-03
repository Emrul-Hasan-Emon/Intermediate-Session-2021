#include<stdio.h>
int main()
{
    int i,j,x;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            scanf("%d",&x);
            if(x==1)
            {
                printf("%d",abs(i-3)+abs(j-3));
            }
        }
    }
    return 0;

}
