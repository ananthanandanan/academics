#include<stdio.h>
void merge(int [],int [],int,int);
int main()
{
int a[]={1,3,5,7};
int b[]={2,4,6,8,10};
merge(a,b,4,5);
return 0;
}
void merge(int a[],int b[],int m,int n)
{ int c[50],i=0,j=0,k=0;
  while(i<m && j<n)
  { if (a[i]<b[j])
      c[k++]=a[i++];
    else
      c[k++]=b[j++];
  }
  while(i<m)
   c[k++]=a[i++];
  while(j<n)
    c[k++]=b[j++];
  for(i=0;i<m+n;i++)
   printf("%d ",c[i]);
   printf("\n");
}
/*
1 2 3 4 5 6 7 8 10 
*/