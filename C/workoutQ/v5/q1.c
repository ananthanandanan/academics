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
{int i;
 for(i=0;i<limit;i++)
   { 
     if(A[i]==element)
      { printf("Found %d at index %d",element,i);
        break;}
    }
    if(i==limit)
      printf("element not found");
 }

 /*
 this is the program for searching an element in an array
enter the limit
4
enter the array
1
4
5
3
enter the element to be searched
4
Found 4 at index 1

*/