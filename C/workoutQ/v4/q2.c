#include<stdio.h>
int main()
{ int A[5]={15,20,30,55,70};
  int *ptr=A;
  while(*ptr<30)
  {  if(*ptr%2!=0)
       *ptr=*ptr+2;
     else 
       *ptr=*ptr+1;
  ptr=ptr+1;
  }
  for(int i=0;i<5;i++)
    printf("%d ",A[i]);
  printf("\n");
  return 0;
}

//output : 17 21 30 55 70 
