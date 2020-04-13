#include<stdio.h>
int main()
{int a[100],j,i;
printf("enter the array\n");
for(i=0;i<5;i++)
  scanf("%d",&a[i]);
for(i=0;i<5;i++)
   { for(j=i+1;j<5;j++)
        printf("array[%d]=%d,array[%d]=%d\n",i,a[i],j,a[j]);
    }
printf("\n");
return 0;
}

/*
enter the array
4
12
3
5
6
array[0]=4,array[1]=12
array[0]=4,array[2]=3
array[0]=4,array[3]=5
array[0]=4,array[4]=6
array[1]=12,array[2]=3
array[1]=12,array[3]=5
array[1]=12,array[4]=6
array[2]=3,array[3]=5
array[2]=3,array[4]=6
array[3]=5,array[4]=6

*/