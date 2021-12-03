#include<stdio.h>
int main()
{
    int x,y;
    float n;
    scanf("%f",&n);
    x=n/1.0;
    y=round((n-x)*100.0);
    printf("%d",y);
}
