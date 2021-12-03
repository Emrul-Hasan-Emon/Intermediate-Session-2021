#include<stdio.h>
int main()
{
    int n,sum,count=0,i;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        int x1,x2,x3;
        for(i=0; i<n; i++)
        {
            scanf("%d %d %d",&x1,&x2,&x3);
            sum=x1+x2+x3;
            if(sum>=2)
            {
                count++;
            }


        }

    }



    printf("%d",count);
}
