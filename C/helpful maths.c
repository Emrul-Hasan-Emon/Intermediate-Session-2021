#include<stdio.h>
#include<string.h>
int main ()
{
    char s[100];
    scanf("%s",s);
    int i,temp,j;
  for(i=0; i<strlen(s); i+=2)
    {
        for(j=0; j<strlen(s)-1; j+=2)
        {
            if(s[j]>s[j+2])
            {
                temp=s[j];
                s[j]=s[j+2];
                s[j+2]=temp;
            }
        }
    }
    printf("%s",s);
}
