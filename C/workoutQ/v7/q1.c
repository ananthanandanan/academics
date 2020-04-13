#include<stdio.h>
int main()
{int a[100],j,i;
printf("enter the array\n");
for(i=0;i<5;i++)
  scanf("%d",&a[i]);
for(i=0;i<5;i++)
   { for(j=0;j<5;j++)
        printf("array[%d]=%d,array[%d]=%d\n",i,a[i],j,a[j]);
    }
printf("\n");
return 0;
}

/*
enter the array
4
1
2
4
5
array[0]=4,array[0]=4
array[0]=4,array[1]=1
array[0]=4,array[2]=2
array[0]=4,array[3]=4
array[0]=4,array[4]=5
array[1]=1,array[0]=4
array[1]=1,array[1]=1
array[1]=1,array[2]=2
array[1]=1,array[3]=4
array[1]=1,array[4]=5
array[2]=2,array[0]=4
array[2]=2,array[1]=1
array[2]=2,array[2]=2
array[2]=2,array[3]=4
array[2]=2,array[4]=5
array[3]=4,array[0]=4
array[3]=4,array[1]=1
array[3]=4,array[2]=2
array[3]=4,array[3]=4
array[3]=4,array[4]=5
array[4]=5,array[0]=4
array[4]=5,array[1]=1
array[4]=5,array[2]=2
array[4]=5,array[3]=4
array[4]=5,array[4]=5
*/