#include<stdio.h>
void dupr(int [],int *);
void del(int [],int,int);
int main()
{int a[100],j,i,n,b;
  printf("enter the no. of ellements");
  scanf("%d",&n);
printf("enter the array\n");
for(i=0;i<n;i++)
  scanf("%d",&a[i]);
dupr(a,&n);
for(i=0;i<n;i++)
  printf("%d ",a[i]);
printf("\n");
return 0;
}

void dupr(int a[],int *n)
{int i,j,k;
 for(i=0;i<*n;i++)
   { for(j=i+1;j<*n;j++)
       {
           if (a[i]==a[j])
           { del(a,j,*n);
            (*n)--;
            j--;
           }
        }
     }
}

void del(int a[],int j,int n)
{ for(int k=j;k<n;k++)
     a[k]=a[k+1];
}
/*
enter the no. of ellements5
enter the array
1
2
2
3
6
1 2 3 6 
*/