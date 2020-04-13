//insertion of element

#include<stdio.h>
int insert(int[],int,int,int);
int main()
{int a[100],n,i,pos,element,value,b;
printf("this is the program for searching an element in an array\n");
printf("enter the limit\n");
scanf("%d",&n);
printf("enter the array\n");
for(int i=0;i<n;i++)
   scanf("%d",&a[i]);
printf("enter the element to be added\n");
scanf("%d",&value);
printf("enter the position of array\n");
scanf("%d",&pos);
b=insert(a,n,pos,value);
printf("the new array is\n");
for(int i=0;i<b;i++)
   printf("%d ",a[i]);
printf("\n");
return 0;
}
int insert(int a[],int limit,int pos,int value)
{int i;
 for(i=limit-1;i>=pos-1;i--)
       a[i+1]=a[i];
 a[pos-1]=value;
 limit+=1;
 return(limit);       
}

/*
this is the program for searching an element in an array
enter the limit
5
enter the array
12
43
5
2
6
enter the element to be added
4
enter the position of array
2
the new array is
12 4 43 5 2 6 
*/