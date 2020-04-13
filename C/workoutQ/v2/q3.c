#include<stdio.h>
int main()
{
int x=10,*y,**z;
y=&x;
z=&y;
printf("x=%d,y=%d,z=%d\n",x,*y,**z);
return 0;
}

//output : x=10,y=10,z=10
