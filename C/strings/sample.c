#include<stdio.h> 
#include<string.h> 
  
int main()
{

char s[100]="Amrita",t[100];
strncpy(t,strcat(strcat(s," "),"Campus"),6);
printf("%s", t);
return 0;
}