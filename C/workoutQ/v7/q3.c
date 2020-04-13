#include<stdio.h>
void findpair(int[],int,int);
int main()
{ 
 int a[100],n,i,s=0;
printf("enter the limit\n");
scanf("%d",&n);
printf("enter the array\n");
for(int i=0;i<n;i++)
   scanf("%d",&a[i]);
printf("enter the sum\n");
  scanf("%d",&s);
findpair(a,n,s);
return 0;
}

void findpair(int a[],int limit,int s)
{int i,j;
 for(i=0;i<limit;i++)
   { for(j=i+1;j<limit;j++)
         if(a[i]+a[j]==s)
              printf("(%d %d)",a[i],a[j]);
    }
 }

 /*
 enter the limit
4
enter the array
12
3
3
4
enter the sum
6
(3 3)
*/