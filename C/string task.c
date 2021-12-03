
#include<stdio.h>
int main()
{
  char a[100];
  scanf("%s",&a);
  int i;
  for(i=0;i<strlen(a);i++)
  {
      a[i]=tolower(a[i]);
      if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='y')
      {
          printf("");
      }
      else
      {
          printf(".%c",a[i]);
      }

  }

}
