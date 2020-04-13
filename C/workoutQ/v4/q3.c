#include<stdio.h>
int main()
{ int A[5]={1,2,3,4,5};
  int *ptr=A+2,i;
  for(i=0;i<5;i++)
  {  (*ptr)*=2;
       --ptr;
  }
  for(i=0;i<5;i++)
    printf("%d ",A[i]);
  printf("\n");
  return 0;
}

//output : Segmentation fault (core dumped)
