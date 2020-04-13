#include<stdio.h>
int main()

{
 int x[100];
for(int i=0;i<5;i++)
   scanf("%d",x+i);
printf("updated array\n");
for(int i=0;i<5;i++)
    printf("%d ",*(x+i));
    printf("\n");
return 0;
}

/*output

1
2
3
4
5
updated array
1 2 3 4 5 
*/