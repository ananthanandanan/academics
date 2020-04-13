#include<stdio.h>
int dupr(int a[],int);
int main()
{int a[100],j,i,n,b;
  printf("enter the no. of ellements");
  scanf("%d",&n);
printf("enter the array\n");
for(i=0;i<n;i++)
  scanf("%d",&a[i]);
b=dupr(a,n);
for(i=0;i<b;i++)
  printf("%d ",a[i]);
printf("\n");
return 0;
}
int dupr(int a[],int n)
{int i,j,k;
 for(i=0;i<n;i++)
   { for(j=i+1;j<n;j++)
       {
           if (a[i]==a[j])
           { for(k=j;k<n;k++)
               {
                  a[k]=a[k+1];
                }
            n--;
            j--;
           }
        }
     }
  return(n);
}
/*
enter the no. of ellements5
enter the array
1
2
2
3
4
1 2 3 4 

*/