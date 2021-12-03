#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three number:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("%d is Largest Number",a);
    }
    else if(b>c&&b>a)
    {
        printf("%d is Largest Number",b);
    }
    else
    {
        printf("%d is Largest Number",c);
    }
}
