#include<stdio.h>
void search(int[],int,int);
int main()
{ const int size=100;
 int A[size],n,i,element;
printf("this is the program for searching an element in an array\n");
printf("enter the limit\n");
scanf("%d",&n);
printf("enter the array\n");
for(int i=0;i<n;i++)
   scanf("%d",&A[i]);
printf("enter the element to be searched\n");
scanf("%d",&element);
search(A,n,element);
return 0;
}
void search(int A[],int limit,int element)
{int i,found;
 for(i=0;i<limit;i++)
   { 
     if(A[i]==element)
      { found=1;
        break;}
    }
    if(found==1)
       printf("Found %d at index %d",element,i);
    else
     printf("element not found");
 }

 /*
 this is the program for searching an element in an array
enter the limit
4
enter the array
2
3
6
5
enter the element to be searched
6
Found 6 at index 2
*/