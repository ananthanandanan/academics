
#include<stdio.h>

int main()
{ 
    int a=5,*ptr;
  ptr=&a;
  *ptr=*ptr*3;
  printf("%d",a);
  return 0;

}

//output : 15