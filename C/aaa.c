#include<stdio.h>
#include<conio.h>
int main(){
 char a[110],b[110]; //highest length 100 hoite pare ami 110 disi somossa nai
 int l=0,i,f=0,g=0;
 scanf("%s",a);
 scanf("%s",b);
 i=0;
 while(a[i]!='\0'){
    if(a[i]>='A' && a[i]<='Z'){
        a[i]=a[i]+32;
    }
    if(b[i]>='A' && b[i]<='Z'){
        b[i]=b[i]+32;
    }
    i++;
 }
 i=0;
 while(a[i]!='\0'){
    if(a[i]>b[i]){
        l++; //aikhan theke bujha jabe je string prothom ta boro tai amar ar loop chalanor dorkar nai
        break;
    }
    if(b[i]>a[i]){
        f++;
        break; //aikhan theke bujha jabe je string second ta boro tai ar loop calanor dorkar nai tai break dilam
    }
    i++;
 }
 if(l>0){
    printf("1\n"); //string 2nd ta first tar cheye choto
 }
 else if(f>0){
    printf("-1\n"); // string first ta 2nd tar cheye choto
 }else {
  printf("0\n"); //string duitai soman
 }
}
