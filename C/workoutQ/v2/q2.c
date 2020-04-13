#include<stdio.h>
int main()
{ int i=6,*j,k;
  j=&i;
  printf("\n%d\n",i**j*i+*j);
  return 0;
}


// output :222
